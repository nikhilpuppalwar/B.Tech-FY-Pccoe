#include<iostream>
using namespace std;
class aa
{
 float gallon;
 float cubic_feet;
 public:
 void getdata()
  {
    cout << "enter the number:- ";
    cin>>gallon;
  }
 void convert()
  {
    cubic_feet = gallon/7.48;
  }
 void display()
  {
    cout << "equivalent in cubic feet is "<< cubic_feet;
  }
};

int main(){
aa x;
x. getdata();
x.convert();
x.display();
return 0;
}