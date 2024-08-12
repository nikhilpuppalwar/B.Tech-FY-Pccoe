#include<iostream>
using namespace std;
class small
{
private:
 int min;
 int max;
 int n;
 int arr[100];
public:
void getdata(){
    cout<<"enter the size of array ";
    cin>>n;
    cout<<"enter the element of array ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}
void minimum(){
    min=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    cout<<"minnium value in this array is "<<min<<"\n";
}
void maximum(){
    max=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    cout<<"maximum value in this array is "<<max<<"\n";
}
};

int main(){
    small t1;
    t1.getdata();
    t1.minimum();
    t1.maximum();
    return 0;
}