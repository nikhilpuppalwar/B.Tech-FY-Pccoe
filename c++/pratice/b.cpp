#include <iostream>
#include <string>

using namespace std;

class Book {
protected:
    int id;
    string title, author;
    string check_out;
    string check_in;

public:
    Book() {}
    Book(string a, string b, int c) : title(a), author(b), id(c) {}
    void checkin() {
        cout << "book return: ";
        cin >> check_in;
    }
    void checkout() {
        cout << "book checkout : ";
        cin >> check_out;
        if (title == check_out) {
            throw title;
        } else {
            cout << "you can borrow the book: ";
            check_out = check_in;
        }
    }
};

class BookUnavailableException : public Book {
public:
    BookUnavailableException() {}
    BookUnavailableException(string a, string b, int c) : Book(a, b, c) {}
    void checkout() {
        if (title == check_out) {
            throw title;
        } else {
            cout << "you can borrow the book: ";
            check_out = check_in;
        }
    }
};

int main() {
    int id;
    cout << "enter the id number of book: ";
    string title, author;
    cout << "enter the title, author of the book: ";
    cin >> title >> author;
    BookUnavailableException B1(title, author, id);
    try {
        B1.checkout();
    } catch (string &e) {
        cout << "book is Unavailable ";
    }

    return 0;
}
