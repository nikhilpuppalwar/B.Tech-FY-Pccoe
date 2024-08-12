#include <iostream>
using namespace std;

class complex  
{
int complex_1;     // data member of class
int complex_2;
public:
void get_data()    // function to take data for user 
{
    cout<<"enter the 1st and 2nd number: ";
    cin>>complex_1>>complex_2;
   
}
 complex operator + (complex c){     // operator overloading of (+)
    complex temp;
    temp.complex_1=complex_1+c.complex_1;
    temp.complex_2=complex_2+c.complex_2;
    return temp;

 }
 void display()     // funtion to display output
 {
    cout<<complex_1<<"\t"<<complex_2;
 }
};

int main() { 
complex t1,t2;   // declaring object of class
t1.get_data();   // call to the function
t2.get_data();
cout<<"the output i.e sum of data member of class first and second is: ";
complex t3=t1+t2;  // invoking operator
t3.display();
 return 0;
}