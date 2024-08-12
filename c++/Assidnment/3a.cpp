#include<iostream>
using namespace std;
class primenumber
{
private:
    int a;
    int b;
public:
void getdata(){
    cout<<"enter the value of a&b ";
    cin>>a>>b;
}
void prim(){
    int flag;
   
    for (int i = a; i <=b; i++)
    {
         flag=0;
        if (i==0||i==1)
        {
            continue;
        }
        
       for (int j = 2; j < b/2 ; j++)
       {
        if (i%j==0)
        {
           flag=1;
           break;
        }
       }
    if (flag==0)
        {
        cout<<" "<<i; 
        }
            
}
}
};

int main(){
primenumber t1;
t1.getdata();
t1.prim();
    return 0;
}
