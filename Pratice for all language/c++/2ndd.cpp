#include <iostream> 
#include <string>

using namespace std;

class base1
{int data1;

public:
base1(int a1){
    data1=a1;
    cout<<"base1 of data1"<<data1<<endl;

}
};
class base2
{int data2;

public:
base2(int a2){
    data2=a2;
    cout<<"base2 of data2"<<data2<<endl;
}};

class derived:public base1, public base2 {
    int data3;
    int data4;
    public:
    derived(int a1,int a2,int a3,int a4):  base1( a1),base2( a2){
data3=a3;
data4 =a4;
cout<<"in derived of data3"<<endl;
cout<<"in derived of data4"<<endl;
    }
};
int main() { 
    derived c1(1,2,3,4);
 return 0;
}