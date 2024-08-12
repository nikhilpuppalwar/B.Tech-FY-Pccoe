#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // string str;
    // string str1="thing that is user name";
    // str = "nikhil_puppalwar";
    // ofstream outfile("112233.txt");
    // outfile << str<<str1;
    // outfile.close();
    
// string str2;
// ifstream intfile("112233.txt");
// while (intfile.eof()==0)
// {
// getline(intfile,str2);
// cout<<str2<<endl;}
// cout<<"thank you for my return";


ofstream out;
out.open("file.txt");
out<<" Hi my name is nikhtil";
    return 0;
}