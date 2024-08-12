#include <iostream> 
using namespace std;
class Third
{
 int arr[100]; 
 int n;
 int key; 
 int flag;
 public:
 void getdata(){
    cout<<"enter the size of an array ";
cin>>n;
cout<<"enter the element of array ";
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}
cout<<"enter the number to be found ";
cin>>key;
flag=0;
 }
 void findd(){
    
   for(int i = 0; i < n; i++)
   {
    if (arr[i]==key)
    {
     cout << "the value is present in array at:- " << i+1 <<"\n";
   flag=i;
    }
    
   }
   if (flag==0)
   {
    cout<<"the given value is not present in the array";
   }
   
 }
};
int main(){
    Third t1;
    t1.getdata();
    t1.findd();
    return 0;
}