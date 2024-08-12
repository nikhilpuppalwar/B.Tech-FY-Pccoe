#include <iostream> 
#include <string>

using namespace std;

class matrix
{
    int n;
    int m;
    int arr1[100][100], arr2[100][100];
    int arr3[100][100];
public:
void getdata(){
cout << "enter the number to set the size of row of an array: " ;
cin >> n;
cout << "enter the number to set the size of colum of an array: " ;
cin >> m;
cout << "enter the element of first array " <<endl;
for (int i = 0; i <m; i++)
{
    for (int  j = 0; j < n; j++)
    {
       cin >> arr1[i][j];
    }
}
cout <<endl<< "enter the element of second array " <<endl;
for (int i = 0; i <m; i++)
{
    for (int  j = 0; j < n; j++)
    {
       cin >> arr2[i][j];
    }
}

}
void addition(){
    for (int i = 0; i <m; i++)
{
    for (int  j = 0; j < n; j++)
    {
       arr3[i][j]=arr1[i][j]+ arr2[i][j];
    }
}
}

void subtraction(){
    for (int i = 0; i <m; i++)
{
    for (int  j = 0; j < n; j++)
    {
       arr3[i][j]=arr1[i][j] - arr2[i][j];
    }
}
}
void multiplication(){
    if(m==n){
            for (int i = 0; i <n; i++)
{
    for (int  j = 0; j < n; j++)
    {
        arr3[i][j] = 0;
       for (int k = 0; k < n; k++)
       {
        arr3[i][j]+=arr1[i][k] * arr2[k][j];
       }
       
    }
}
    }
    else{
        cout<<"the size of the array is not equal to first and second number\n";
        cout<<"therefore the multiplication cannot be done";
    }
}

void display(){
    cout<<" the resultant array is: "<<endl;
    for (int i = 0; i <m; i++)
{
    for (int  j = 0; j < n; j++)
    {
       cout << arr3[i][j]<<"\t";
    }
    cout<<endl;
    
}
}
};


int main() { 
matrix m;
m.getdata();
m.addition();
m.display();
m.subtraction();
m.display();
m.multiplication();
m.display();

 return 0;
}