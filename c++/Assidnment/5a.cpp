#include <iostream> 
#include<cstring>
using namespace std;

class banking
{
 string name;
  int number;
  char type;
  float balance;
  int n;
  char chh;
 public:
   banking()                                      // default contructor
   {   
     name ="nikhil" ;
     number=999;
     type='s';
     balance=100;
   }
   
    banking(string new_name,int new_number,char new_type,float new_balance)  // parameterized contructor 
   {
     name=new_name;
     number=new_number;
     type=new_type;
     balance=new_balance;
   }

    void withdraw()                             // function of withdraw money
    {
      float withdraw_no;
      cout<<"enter the amout to withdraw:- ";
      cin>>withdraw_no;
     if (balance>=withdraw_no)       // checking codition if true
      {
        balance=balance-withdraw_no;
        cout<<"withdraw is successful"<<endl;
        cout <<"user name: "<<name <<"\naccount number: " <<number<<"\nnow  your balance is: "<<balance<<endl;
      }
     else                    // codition is false then  
      {
       cout<<"balance is insufficient to withdraw money ";
      }
    }
 
    void deposit()       // function for deposit money
    {
      float deposit_no;
      cout<<"enter the amount to deposit: ";
      cin>>deposit_no;
      balance +=deposit_no;
      cout<<"amount is deposited successful"<<endl;
      cout <<"user name: " <<name <<"\naccount number: " <<number<<"\nnow  your balance is: "<<balance<<endl;
    }

    void choose_transaction()         // function for entering the value of n i.e 1 or 2
    {
       cout << "For deposit, enter 1; for withdrawal, enter 2: ";
       cin>>n;
       while(n != 1 &&  n != 2)
       {
          cout << "Invalid choice. Re-enter: ";
          cin >> n;  
       }
    }    

    void transaction_process()         // function for withdraw or deposit
    {
      if (n==1)
      {
        deposit();
      }
      else
      {
        withdraw();
      }
      
    }

    void transaction_to_continue()
    {
      cout << "\nDo you want to continue? (y/n): ";
        cin >> chh;
        while (chh != 'n' && chh != 'y')
        {
            cout << "Invalid choice. Re-enter (y/n): ";
            cin >> chh;
        }
    }

    void continue_y()
    {
        while(chh=='y'){
            choose_transaction();
            transaction_process();
            transaction_to_continue();
        };
    }

};

int main()
{ 
  string names;                          // taking input from user i.e your name
  cout<<"enter the account user name :- ";
  cin>>names;

  int account_no;                         // taking input from user i.e account no.
  cout<<"enter the account number:- ";
  cin>>account_no; 

  float bal;                           // taking input from user i.e balance
  cout<<"enter the account balance:-  ";
  cin>>bal;

  char sav_cur;                          // taking input from user i.e current or saving
  cout<<"enter the account type 's' for saving or 'c' for current:  ";
  cin>>sav_cur;


  do
  {
    if(sav_cur != 'c' && sav_cur!='s')
    {
      cout << "Invalid account type."<<endl<<"Re-enter 's' for saving or 'c' for current: ";
      cin >> sav_cur;
    }
  } while (sav_cur!= 'c' && sav_cur!='s');

  banking t1(names,account_no,sav_cur,bal);
  t1.choose_transaction();
  t1.transaction_process();
t1.transaction_to_continue();
t1.continue_y();
  return 0;
}