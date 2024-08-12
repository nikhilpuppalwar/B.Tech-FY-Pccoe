#include <iostream> 
#include <string>

using namespace std;
#define n=10;
class stack
{
int *arr;
int top;
public:
stack(){
    arr= new int[n];
    top=-1;
}
void push(int x)
{
    if (top==n-1)
    {
        cout<<"stack is overflow"<<endl;
     return;
    }
  
        top++;
        arr[top]=x;
    
}

void pop()
{
    if (top==-1)
    {
        cout<<"stack is underflow";
        return;
    }
        top--;
}
 int Top(){
    if (top==-1){
    cout<<"No element  int stack"<<endl;
    return -1;
 }
 return arr[top];
 }
bool empty()
{
    return top==-1;
    
} 
};

int main() { 
    stack st;
    st.
 return 0;
}