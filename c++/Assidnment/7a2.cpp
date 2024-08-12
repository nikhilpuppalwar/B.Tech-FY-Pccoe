#include <iostream> 
#include <string>

using namespace std;

class findig_area   // class delaration 
{
float result;         // private data member
public:
float area(int radius)   // member function to find area of circle
{
    result=radius*radius*3.14;
    return result;
}
float area(int base,float height) // member function to find area of triangle
{
    result=0.5*(base*height);
    return result;
}
float area(int side1, int side2) // member function to find area of rectangle
{
    result=side1*side2;
    return result;
}
};

int main() {    
   int r,b,l;     // r=radius b= base or breath l=lenght 
   float h;       // h= height
   float result;
   char ch;        // use for continue or stop
   findig_area a1;    // invoking class by object
   
   
   do{                 // loop for finding  area again
    cout<<"Pass 1: For finding area of circle, Pass 2: For finding area of rectangle, Pass 3: For finding area of triangle   ";
    int n;
    cin>>n;
    while (n!= 1 && n!=2 && n!=3)  // loop for re enter the number if number you enter is wrong
    {
       cout<<"Invaild choice, re-enter the number:  ";
       cin>>n;
    }

   switch (n)       // switch cases for finding area of differnt shape
   {
   case 1:       // for area of circle
    cout<<"enter the radius of circle: ";
    cin>>r;
    result=a1.area(r);
    cout<<"the area of circle is: "<<result;
    break;
    case 2:     // for area of rectangle
    cout<<"enter the lenght and breath of rectangle: ";
    cin>>b>>l;
    result=a1.area(b,l);
    cout<<"the area of rectangle is: "<<result;
    break;
    case 3:  // for area of triangle
    cout<<"enter the base and height of triangle: ";
    cin>>b>>h;
   result= a1.area(b,h);
    cout<<"the area of triangle is: "<<result;
   }
cout<<"\npass: y for continue and pass: n for stop: ";
cin>>ch;
while ( ch != 'y' && ch!='n')   // loop if you enter the wrong keyword
{
 cout<<"Invaild choice, re-enter the (y/n):  ";
 cin>>ch;
}
   }while (ch=='y');   
   
 return 0;
}