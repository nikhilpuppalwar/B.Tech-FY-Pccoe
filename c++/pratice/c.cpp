#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main() {
    try {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        if (num2 == 0) {
            throw (float)num2;
        } else if (typeid(num1) != typeid(num2)) {
            throw num1;
        }

        cout << "Division: " << num1 / num2 << endl;
    } catch (int e) {
        cout << "Arithmetic Exception" << endl;
    } catch (float e) {
        cout << "Number Format Exception" << endl;
    }

    return 0;
}
