#include <iostream> 
#include <string>
#include <fstream> 
using namespace std;


int main() { 
    char ah;
    string str;
    ifstream file("112233.txt");
    while(!file.eof()) {
//  file.get(ah);  cout << ah;
getline(file,str);
 cout<<str;
 }

 cout<<endl<<file.tellg();
 file.close();
 ofstream ifile;
 ifile.open("112233.txt", ios::app|ios::out);
//  ifile << "Hello World";
ifile.seekp(-10,ios::end);
 cout<<endl<<ifile.tellp();
 
 file.close();
 return 0;
} 