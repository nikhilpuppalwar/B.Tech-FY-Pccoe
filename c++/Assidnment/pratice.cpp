#include <iostream> 
#include <string>
#include<algorithm>

using namespace std;
class new1{
      int x,y,z;
    public: 
  
    new1(){
        x=10;
        y=30;
        z=50;
    }
friend ostream& operator << (ostream &os, new1 b){
    cout<< "output is: "<<b.x<<" "<<b.y<<" "<<b.z<<" ";
    
} 
/*friend ostream& operator<<(ostream& os,
const B& b) f os << "B Object: ";
os << b.data_ << endl;
return os;
g*/
};
int main() { 
   
    new1 kd;
    cout<<kd;
    return 0;
    }