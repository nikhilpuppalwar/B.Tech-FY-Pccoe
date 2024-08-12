#include<iostream>
using namespace std;
class aa
{
  int year=1990;
  int number[4]={ 135,7290,11300,16200 };
 public:
  void getdata()
  {
  for(int i=0;i<4;i++)
       {
  cout<<year +i << "  "<<number[i] <<"\n";
       }
  }
};

int main()
{
  aa x;
  x.getdata();
  return 0;
}