#include <iostream>
#include<string>
#include <map>
#include <typeinfo>
using namespace std;
int main(){
//     map <int, string> lines;
//     lines[0]="nikhil";
//     lines[1]="puppalwar";
//     lines[2]="is";
//     lines[3]="a";
//     lines[4]="good";
// map <int, string> :: iterator li;
// for (li = lines.begin(); li !=lines.end(); li++){
// cout << li->first << " " << li->second<<endl;
// }
int x=56;
decltype(float(x)) nik=123.56;
cout <<typeid(nik).name()<<"\n"<<nik;
    return 0;
}
