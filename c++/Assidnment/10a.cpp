#include <iostream>
#include <string>

using namespace std;

class student {
protected:
    int roll_no;

public:
    void get_no() {
        cout << "enter the roll number" << endl;
        cin >> roll_no;
    }

    void put_no() {
        cout << "roll number is " << roll_no << endl;
    }
};

class test : virtual public student {
protected:
    float mark1;
    float mark2;

public:
    void get_mark() {
        cout << "enter the marks" << endl;
        cin >> mark1 >> mark2;
    }

    void put_mark() {
        cout << "marks are " << mark1 << " and " << mark2 << endl;
    }
};

class sport : virtual public student {
protected:
    int score;

public:
    void get_score() { 
        cout << "enter the score" << endl;
        cin >> score;
    }

    void put_score() {
        cout << "score is " << score << endl;
    }
};

class result : public test, public sport {
protected:
    int total;

public:
    void display() {
        put_no();
        put_mark();
        put_score();
        total = mark1 + mark2 + score;
        cout << "total is " << total << endl;
    }
};

int main() {
    result r1;
    r1.get_no();
    r1.get_mark();
    r1.get_score();
    r1.display();
    return 0;
}
