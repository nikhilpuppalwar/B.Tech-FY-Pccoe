#include <iostream>
#include <string>
#include<cmath>

using namespace std;

class account
{
    protected:
    string name;
    int account_num;
    char account_type;
    float balance;

public:
    void getdata(float x)
    {  balance=x;
        cout << "enter the account holder name: ";
        cin >> name;
        cout << "enter the accout number: ";
        cin >> account_num;
        cout << "enter the account type(s=saving,c=current)(s/c): ";
        cin >> account_type;
        while (account_type != 's' && account_type != 'c')
        {
            cout<<"re-enter the account type(s/c): ";
           cin>>account_type;
        }
        
    }
};
class current_account : public virtual account
{
public:
    void facility()
    {
        cout << "\ncheckbook facility is available" << endl;
    }
    void maintenance()
    {
        if (balance <= 200)
        {
            cout << "service charge is applied i.e ₹20 " << endl;
            balance = balance - 20;
            cout << "balance is: " << balance << endl;
        }
    }
};

class saving_account : public virtual account
{
    float compund_interest;
    float withdraw_amount;

public:
    void interest()
    {  float r,n;
    double r = 0.05; // Example annual interest rate (5%)
    int n = 12; // Example number of times interest is compounded per year
        compund_interest = balance*pow(1 + r/100,n);
        cout << "compound interst is: " << compund_interest << endl;
        balance = compund_interest;
    }
    void withdraw()
    {
        cout << "enter withdraw amount: ";
        cin >> withdraw_amount;
        if (withdraw_amount > balance)
        {
            cout << "balance is insufficient to withdraw: ";
        }
        else
        {
            balance = balance - withdraw_amount;
            cout << "amount is withdraw successfully: " << balance << endl;
        }
    }
};
class bank :public saving_account, public current_account{
    protected:
    
    public:
    void saving_or_cuurent(){
    if(account_type == 'c')
    {  
       
        facility();
        maintenance();
    }
    else {
        interest();
        withdraw(); 
    }
    }
    void display_amount(){
        cout<< "User name: "<<name<<endl;
       cout<<" amount number: "<<account_num<<endl;
        cout<<"Account type: "<<account_type<<endl;
        cout<< "Balance: "<<balance<<endl;
    }

};
int main()
{ bank b1;
b1.getdata(5000);
char ch='y';
while(ch=='y'){
b1.saving_or_cuurent();
b1.display_amount();
cout<<"do you want to continue(y/n): ";
cin>>ch;
}
    return 0;
}