#include <iostream> 
#include <string>

using namespace std;

class book
{
string book_name;
string book_type;
public:
void get_data(){
    cout<<"enter the name of book: ";
    cin>>book_name;
    cout<<"enter the type of book: ";
    cin>>book_type;
}
void display(){
    cout<<"book name: "<<book_name;
    cout<<"\nbook type: "<<book_type;
}
};

int main() { 
    int count;
    cout<<"enter the number of book to store: ";
    cin>>count;
book b[count];
for (int i = 0; i < count; i++)
{
    b[i].get_data();
   cout<<endl;
}
for (int i = 0; i < count; i++)
{
    b[i].display();
   cout<<endl;
}
 return 0;
}