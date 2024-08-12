#include <iostream> 
#include <string>
#include <exception>
using namespace std;



int main() { 
    try {
        int result;
        throw ;
    }
    catch (...) {
        cout<<"Error: ";
    }
 return 0;
}