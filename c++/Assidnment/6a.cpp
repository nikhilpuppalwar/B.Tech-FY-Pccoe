#include <iostream> 
#include<string>
using namespace std;

class student
{
string sname;
int count;
float *marks;
float total;
float tmax;

float max;
float average;
public:
void assign()  // taking data from user
{ 
    cout<<"enter the name of student: ";
    cin>>sname;
    cout<<"enter the total number of subject: ";
    cin>>count;
    marks=new float[count];  // allocate memary to marks
    cout<<"enter the marks of student: ";
    for (int i = 0; i < count; i++)
     {
        cin>>marks[i];
     }

}
void compute()  //finding the tatal marks obtain,average marks, max marks 
{
    //total
     total=0;
    for (int i = 0; i < count; i++)
    {
        total=total+marks[i];
    }
    //max number
   max =marks[0];
    for (int i = 1; i < count; i++)
    {
        if(max<marks[i]){
            max=marks[i];
        }
    }
    // average
   average=total/count;
    
}
void display() // displaying to data on screen 
{
cout<<"\nName of student: "<<sname<<"\n";
cout<<"Marks: ";
for (int i = 0; i < count; i++)
{
    cout<<marks[i]<<"\t";
}

cout<<"\nMaximum marks is: "<<max;
cout<<"\nTotal marks is: "<<total;
cout<<"\nAverage marks is: "<<average;
}
};

int main() { 
student t1;   // class object is create 
t1.assign();  
t1.compute();  // 67,68,69 are member fuction of class student
t1.display();
 return 0;
}