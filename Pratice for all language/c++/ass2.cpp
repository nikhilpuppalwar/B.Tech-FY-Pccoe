/*Write a program to create simple calculator using switch case statement.
. The user should be able to provide two integer as a input and allowed operation are +, _, * and /
*/

#include<iostream>
using namespace std;
class program
{
    double a;
    double b;
    public:
    void input(){
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<"Enter the second number: ";
        cin>>b;
    }
    void operation(){
        cout<<"Enter the operation(like *,/,-,+): ";
        char ch;
        cin>>ch;
        while ( ch!='+' && ch!='/' && ch!='+' && ch!='-)
        {
            cout<<" You enter the the wrong operation\n";
            couta<<"re-enter the  operation(like *,/,-,+);
       cin>>ch;
        }
        
        switch(ch){
            case '+':
                cout<<a+b<<endl;
                break;
            case '-':
                cout<<a-b<<endl;
                break;
            case '*':
                cout<<a*b<<endl;
                break;
            case '/':
                cout<<a/b<<endl;
                break;
        } 
    
}

};
int main()
{

    program ob;
    ob.input();
    ob.operation();
    return 0;
}