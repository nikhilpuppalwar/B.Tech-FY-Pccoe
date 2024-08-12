#include <iostream>
#include <string>

using namespace std;

int main() {
    float a, b;
    char ch;
    do {
        cout << "Enter two numbers: ";
        cin >> a >> b;
        try {
            if (b == 0) {
                throw b;
            } else {
                cout << "Result: " << a / b << endl;
                cout << "Do you want to continue? (y/n): ";
                cin >> ch;
            }
        } catch (float &e) {
            cout << "Error: Division by zero is not allowed." << endl;
            cout << "Re-enter the numbers." << endl;
        }
    } while (ch == 'y' || ch == 'Y');
    return 0;
}
