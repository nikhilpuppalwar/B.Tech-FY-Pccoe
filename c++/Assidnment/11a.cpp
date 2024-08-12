#include <iostream>
#include <string>

using namespace std;

class person
{
protected:
    string name;
    int ID;

public:
    person()
    {
        name = "ooo";
        ID = 123;
    }
    person(string a, int b)
    {
        name = a;
        ID = b;
    }
};

class account : virtual public person
{
protected:
    float salary;

public:
    account() { salary = 111; }
    account(float c)
    {
        salary = c;
    }
};
class admin : virtual public person
{
protected:
    float experience;

public:
    admin() { experience = 000; }
    admin(float d)
    {
        experience = d;
    }
};
class master : public account, public admin
{
public:
    master(string a, int b, float c, float d) : person(a, b), account(c), admin(d)
    {
    }
    void display()
    {
        cout << "name: " << name << "\nID: " << ID << "\nsalary: " << salary << "\nexperience: " << experience;
    }
};
int main()
{
    string str;
    int ID;
    float salary, experience;
    cout << "enter the name: ";
    cin >> str;
    cout << "enter the ID: ";
    cin >> ID;
    cout << "enter the salary: ";
    cin >> salary;
    cout << "enter the experience: ";
    cin >> experience;
    cout << "enter the any number: ";
    master m1(str, ID, salary, experience);
    m1.display();
    return 0;
}