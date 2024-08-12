#include <iostream>
#include <string>

using namespace std;

class vehicle // base class
{
protected:
    float mileage;
    float price;

public:
    vehicle() {}
    vehicle(float mil, float pri) : mileage(mil), price(pri) {}
};

class car : public vehicle // derive class vehicle
{
protected:
    float ownership_cost;
    float warranty;
    int seating_capacity;
    string fuel_type;

public:
    car() {}
    car(float own_cost, float war, int seats, string fuel,float mile,float price) :vehicle(mile, price),
        ownership_cost(own_cost), warranty(war), seating_capacity(seats), fuel_type(fuel) {}
};

class TATA : public car // derive class of derive class car
{
    string model_type;

public:
    TATA(string model, float mile, float price, float own_cost, float war, int seats, string fuel) :
        model_type(model), car(own_cost, war, seats, fuel,mile, price){}

    void display()
    {
        cout << "Model Type: " << model_type << endl;
        cout << "Ownership Cost: " << ownership_cost << endl;
        cout << "Warranty (yrs): " << warranty << endl;
        cout << "Seating Capacity: " << seating_capacity << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class MARUTI : public car // derive class of derive class car
{
    string model_type;

public:
    MARUTI(string model, float mile, float price, float own_cost, float war, int seats, string fuel) :
        model_type(model), car(own_cost, war, seats, fuel,mile, price){}

    void display()
    {
        cout << "Model Type: " << model_type << endl;
        cout << "Ownership Cost: " << ownership_cost << endl;
        cout << "Warranty (yrs): " << warranty << endl;
        cout << "Seating Capacity: " << seating_capacity << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
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
    bike() {}
    bike(int cyli, int number_o, string cooling, string wheel, float fuel_t,float mile,float price) 
    :vehicle(mile, price), cylinder(cyli), number_of_gear(number_o)
    ,cooling_type(cooling),wheel_type(wheel),fuel_tank_size(fuel_t)
    {
    }
};

class TVS : public bike // derive class of derive class bike
{
    string maketype;
public:
 TVS(){}
    TVS(string makety,int cyli, int number_o, string cooling, string wheel, float fuel_t,float mile, float pric):
    maketype(makety), bike(cyli, number_o, cooling,  wheel,fuel_t,mile,pric){}
};

class BAJA : public bike //  derive class of derive class bike
{
    string maketype;
    public:
    BAJA(){}
    BAJA(string makety,int cyli, int number_o, string cooling, string wheel, float fuel_t,float mile, float pric):
    maketype(makety), bike(cyli, number_o, cooling,  wheel,fuel_t,mile,pric){}
};
int main()
{
    float mileage, price, ownership_cost, warranty;
    int seating_capacity;
    string fuel_type, model_type;

    cout << "Enter the Model Type: ";
    cin >> model_type;
    cout << "Enter the Ownership Cost: ";
    cin >> ownership_cost;
    cout << "Enter the Warranty (in years): ";
    cin >> warranty;
    cout << "Enter the Seating Capacity: ";
    cin >> seating_capacity;
    cout << "Enter the Fuel Type: ";
    cin >> fuel_type;
    cout << "Enter the Mileage: ";
    cin >> mileage;
    cout << "Enter the Price: ";
    cin >> price;

    MARUTI m1(model_type, mileage, price, ownership_cost, warranty, seating_capacity, fuel_type);
    m1.display();

    cout << endl;
    TATA m2(model_type, mileage, price, ownership_cost, warranty, seating_capacity, fuel_type);
    m2.display();

    return 0;
}
