#include <iostream> 
#include <string>

using namespace std;

class Book
{
string title,author, ISBN;
public:
Book (){}
Book(string a,string b, string c): title(a),author(b),ISBN(c){}
void display(){
    cout<< "\nTitle: "<<title;
    cout<< "\nauthor: "<<author;
    cout<<"\n ISBN: "<<ISBN;
}
};

int main() { 
    string title,author, ISBN;
    cout<<"enter the title, author and ISBN of the book: ";
    cin>>title>>author>> ISBN;
    Book B1( title, author,  ISBN);
    B1.display();
 return 0;
}