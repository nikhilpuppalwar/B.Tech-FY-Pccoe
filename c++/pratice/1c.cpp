#include <iostream> 
#include <string>

using namespace std;

class vehicle {
protected:
    float mileage;
    float price;
public:
    vehicle(float a, float b) {
        mileage = a;
        price = b;
    }
};

class car : public vehicle {
protected:
    float ownership_cost;
    float warranty;
    int seating_capacity;
    string fuel_type;
public:
    car(float a, float b, int c, string d, float e, float f) : vehicle(e, f) {
        ownership_cost = a;
        warranty = b;
        seating_capacity = c;
        fuel_type = d;
    }
};

class bike : public vehicle {
protected:
    int cylinder;
    int number_of_gear;
    string cooling_type;
    string wheel_type;
    float fuel_tank_size;
public:
    bike(int a, int b, string c, string d, float e, float f) : vehicle(e, f) {
        cylinder = a;
        number_of_gear = b;
        cooling_type = c;
        wheel_type = d;
    }
};

int main() {
    float mileage, price, ownership_cost, warranty;
    int seating_capacity;
    string fuel_type;

    cout << "Enter the mileage of the vehicle: ";
    cin >> mileage;
    cout << "Enter the price of the vehicle: ";
    cin >> price;
    cout << "Enter the ownership cost of the vehicle: ";
    cin >> ownership_cost;
    cout << "Enter the warranty of the vehicle (in years): ";
    cin >> warranty;
    cout << "Enter the seating capacity of the vehicle: ";
    cin >> seating_capacity;
    cout << "Enter the fuel type of the vehicle: ";
    cin >> fuel_type;

    car c(ownership_cost, warranty, seating_capacity, fuel_type, mileage, price);

    return 0;
}
