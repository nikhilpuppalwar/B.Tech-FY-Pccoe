/*create a class television that has a data member to hold the model number and screen size in inches and price
. member fuction include overloaded insterstion and extraction if more that 4 digit are entern the model , if screen size is smaller that
12 0r greater than 70 inches, or if the price is negative or over 5 thousand then throw an exception . write a main program that
create a tenivison allow the use to enter the data and dispaly the data member if  expection replace all the daata member with 0 value*/

#include <iostream>
#include <string>

using namespace std;
class television
{
    int model_number;
    float screen_size;
    double price;

public:
    void getdata()
    {
        cout << "Enter the model number: ";
        cin >> model_number;
        cout << "Enter the screen size: ";
        cin >> screen_size;
        cout << "Enter the price: ";
        cin >> price;
    }
    void error1()
    {
        if (model_number  > 9999)
        {
            error2();
        }
        else
        {
            model_number = 0;
            throw(model_number);
        }
    }
    void error2()
    {
        if (screen_size > 12 && screen_size < 70)
        {
            error3();
        }
        else
        {
            screen_size = 0;
            throw(screen_size);
        }
    }

    void error3()
    {
        if (price < 0 && price > 50000)
        {
            cout << "\nall the vlaue are carrec" << endl;
        }
        else
        {
            price = 0;
            throw(screen_size);
        }
    }
    void display()
    {
        cout << "The model number is " << model_number << endl;
        cout << "The screen size is " << screen_size << endl;
        cout << "The price is " << price << endl;
    }
};

int main()
{

    television t;
    try
    {
        t.getdata();
        t.error1();
        t.display();
    }
    catch (...)
    {
        cout << " something is wrong in your entry" << '\n';
    }

    return 0;
}