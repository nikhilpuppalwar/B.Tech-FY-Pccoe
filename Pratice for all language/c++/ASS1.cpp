#include <iostream>
using namespace std;
class code
{int n;
    char ch;
    public:
    code(){}
    code(int x,char chh){
        n=x;
        ch=chh;
    }
    void Display(){
        cout<<"The star pattern is\n";
    for(int i=1;i<n+1;i++)
{ for(int j=1;j<=i;j++ ){
    cout<<ch<<" ";
}cout<<endl;}
    }
    ~code(){};
};
int main()
{ int n;
char ch='*';
cout << "enter the number of star pattern you want: ";
cin>>n;
code c1(n,ch);
c1.Display();
    return 0;
}