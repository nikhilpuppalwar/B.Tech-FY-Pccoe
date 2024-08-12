#include <iostream> 
using namespace std;

class gpa_store
{
int *gpa;
int count;
public:
void get_data(){
    cout<<"enter the number of student: ";
    cin>>n;
    gpa=new int[cout];
    cout<<"enter the gpa of the student: "
    for (int i = 0; i < count; i++)
    {
        cin>>gpa[i];
    }  
}

void output(){
    for (int i = 0; i < count; i++)
    {
       cout<<"roll no. "<<i+1<<"\t gpas is: "<<gpa[i];
    }
    
}
~gpa_store() {
        delete[] arr; // Deallocate memory when object is destroyed
}
};

int main() { 
gpa_store t1;
t1.get_data();
t1.output();
t1.~gpa_store();
 return 0;
}