#include <iostream> 
#include <string>

using namespace std;

class bank
{string bank_name;
string USER_name;
int id;
public:
void set_name(){
    cout << "Enter the name of the bank: ";
  getline(cin, bank_name);
    cout << " Enter the name of the user: ";
    getline(cin, USER_name);
    cout << "Enter your ID: ";
    cin >> id;
}
void display(){
    cout << "Bank Name: " << bank_name << endl;
    cout << "User Name: " << USER_name << endl;
    cout << "ID: " << id << endl;
 
}
};

int main() { 
cout<<"this is the code for banking sector:"<<endl<<endl;
bank ba;
ba.set_name();
ba.display();
 return 0;
}