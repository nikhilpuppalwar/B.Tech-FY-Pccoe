#include <iostream> 
using namespace std;

class class_name
{
int* arr;
int count =10;  
public:
void get_data(){
 
  arr=new int[count];   // Allocate memory for the array
  cout<<"enter the element of array: ";
  for (int i = 0; i < count; i++)
  {
    cin>>arr[i];
  }
  
}
void output(){
  cout<<"the array is:  ";
  for (int i = 0; i < count; i++)
  {
    cout<<arr[i]<<" ";
  }
  
}

};

int main() { 
class_name t1;
t1.get_data();
t1.output();
 return 0;
}