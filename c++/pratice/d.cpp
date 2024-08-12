#include <iostream> 
#include <string>

using namespace std;

template<class T, class U, class V> 
class television {
    T model_number;
    U screen_size;
    V price;

public:
    void getdata() {
        cout << "Enter the model number: ";
        cin >> model_number;
        cout << "Enter the screen size: ";
        cin >> screen_size;
        cout << "Enter the price: ";
        cin >> price;
    }

    void error1() {
        if (model_number != 4) {
            throw model_number;
        }
    }

    void error2() {
        if (screen_size <= 12 || screen_size >= 70) {
            throw screen_size;
        }
    }

    void error3() {
        if (price <= 0 || price >= 5000) {
            throw price;
        }
    }

    void display() {
        cout << "The model number is " << model_number << endl;
        cout << "The screen size is " << screen_size << endl;
        cout << "The price is " << price << endl;
    }
};

int main() {
    television<int, float, float> t;
    try {
        t.getdata();
        t.error1();
        t.error2();
        t.error3();
        t.display();
    } catch (...) {
        cout << "You entered something wrong." << endl;
    }

    return 0;
}
