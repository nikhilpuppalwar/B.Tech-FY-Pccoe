#include <iostream>
#include <string>

using namespace std;

class vehicle // base class
{
protected:
    float mileage;
    float price;

public:
};

class car : public vehicle // derive class vehicle
{
protected:
    float ownership_cost;
    float warrenty;
    int seating_capacity;
    string fuel_type;

public:
};
class bike : public vehicle // derive class vehicle
{
protected:
    int cylinder;
    int number_of_gear;
    string cooling_type;
    string wheel_type;
    float fuel_tank_size;

public:
};
class TATA : public car // derive class of derive class car
{
    string model_type;

public:
    void getdata()
    {
        cout << "enter the model_type:  ";
        cin >> model_type;
        cout << "enter the owbership cost:  ";
        cin >> ownership_cost;
        cout << "enter the warranty (in years): ";
        cin >> warrenty;
        cout << "enter the seat capacity of the car: ";
        cin >> seating_capacity;
        cout << "enter the type of fuel(oil, liquid,air):  ";
        cin >> fuel_type;
        cout << "enter the mileage of the car: ";
        cin >> mileage;
        cout << "enter the price of the car: ";
        cin >> price;
    }
    void display()
    {
        cout << "model type:  " << model_type << endl;
        cout << "ownership cost: " << ownership_cost << endl;
        cout << " warrenty(yrs):  " << warrenty << endl;
        cout << "seating capacity: " << seating_capacity << endl;
        cout << " fuel type:  " << fuel_type << endl;
        cout << "mileage:  " << mileage << endl;
        cout << "price:  " << price << endl;
    }
};
class MARUTI : public car // derive class of derive class car
{
    string model_type;

public:
    void getdata()
    {
        cout << "enter the model_type:  ";
        cin >> model_type;
        cout << "enter the ownership cost:  ";
        cin >> ownership_cost;
        cout << "enter the warranty (in years): ";
        cin >> warrenty;
        cout << "enter the seat capacity of the car: ";
        cin >> seating_capacity;
        cout << "enter the type of fuel(oil, liquid,air):  ";
        cin >> fuel_type;
        cout << "enter the mileage of the car: ";
        cin >> mileage;
        cout << "enter the price of the car: ";
        cin >> price;
    }

    void display()
    {
        cout << "model type:  " << model_type << endl;
        cout << "ownership cost: " << ownership_cost << endl;
        cout << " warrenty(yrs):  " << warrenty << endl;
        cout << "seating capacity: " << seating_capacity << endl;
        cout << " fuel type:  " << fuel_type << endl;
        cout << "mileage:  " << mileage << endl;
        cout << "price:  " << price << endl;
    }
};

class TVS : public bike // derive class of derive class bike
{
    string maketype;

public:
};

class BAJA : public bike //  derive class of derive class bike
{
protected:
    string maketype;
};
int main()
{
    MARUTI m1;
    m1.getdata();
    m1.display();

    cout << endl;
    TATA m2;
    m2.getdata();
    m2.display();
    return 0;
}