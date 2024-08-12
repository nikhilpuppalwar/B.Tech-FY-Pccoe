#include <iostream>
#include <string>
using namespace std;

class student
{
    string sname;
    int count;
    float *marks;
    float total;
    float tmax;

    float max;
    float average;

public:
    student() {}  // constructor
    void assign() // taking data from user
    {
        cout << "enter the name of student: ";
        cin >> sname;
        cout << "enter the total number of subject: ";
        cin >> count;
        marks = new float[count]; // allocate memary to marks
        cout << "enter the marks of student: ";
        for (int i = 0; i < count; i++)
        {
            cin >> marks[i];
        }
    }
    void compute() // finding the tatal marks obtain,average marks, max marks
    {
        // total
        total = 0;
        for (int i = 0; i < count; i++)
        {
            total = total + marks[i];
        }
        // max number
        max = marks[0];
        for (int i = 1; i < count; i++)
        {
            if (max < marks[i])
            {
                max = marks[i];
            }
        }
        // average
        average = total / count;
    }
    void display() // displaying to data on screen
    {
        cout << "\nName of student: " << sname << "\n";
        cout << "Marks: ";
        for (int i = 0; i < count; i++)
        {
            cout << marks[i] << "\t";
        }
// 67,68,69 are member fuction of class studentout << "\nAverage marks is: " << average;
    }
    ~student()
    { // destructor
        delete[] marks;
    }
};

int main()
{
    student t;    // object is created
    student *ptr; // class pointer is create
    ptr = &t;     //
    ptr->assign();
    ptr->compute();
    ptr->display();
    return 0;
}