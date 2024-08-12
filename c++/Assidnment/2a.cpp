#include <iostream>
#include<cmath> 
using namespace std;

class complex
{
int complex_1;
int complex_2;
public:
complex(){
    complex_1=0;
    complex_2=0;
}
complex(int a,int b){
      complex_1=a;
    complex_2=b;
}
 complex operator + (complex c){
    complex temp;
    temp.complex_1=complex_1+c.complex_1;
    temp.complex_2=complex_2+c.complex_2;
    return temp;

 }
 void display(){
     cout<<complex_1<<endl<<complex_2;
 }
};

int main() { 
complex t1(10,20),t2(20,30);

complex t3=t1+t2;
t3.display();
 return 0;
}