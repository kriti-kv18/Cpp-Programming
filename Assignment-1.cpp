#include <iostream>
using namespace std;
class bank
{
    private:
    int acc_num;
    public:
    char name[20];
    int widamount,balance,deposit_amt;
    void getdata();
    void deposit();
    void withdrawl();
    void display();
    bank()
        {
            acc_num=0;
            widamount=0;
            balance=0;
            deposit_amt=0;   
        }
};
void bank::getdata()
{
    cout<<"\nEnter the name:";
    cin>>name;
    cout<<"\nEnter the account number";
    cin>>acc_num;
    cout<<"\nEnter the balance:";
    cin>>balance;
}
void bank::deposit()
{
  cout<<"You have choosen the deposit option!!";
  cout<<"\nPlease enter the amount to be deposited:";
  cin>>deposit_amt;
  balance=balance+deposit_amt;
}

void bank::withdrawl()
{
  cout<<"You have choosen the withdraw option"<<endl;
  if(balance<5000)
  {
    cout<<"You are having"<<balance<<"in your account";
    cout<<"\n you can't withdraw money";
  }
  else
  {
      cout<<"Enter the amount to be withdrawl:";
      cin>>widamount;
      balance=balance-widamount;
  }
  
}
void bank::display()
{
    cout<<"Your details are as follows:";
    cout<<"\nAccount Number:"<<acc_num;
    cout<<"\nName:"<<name;
    cout<<"\nBalance :"<<balance;
}
int main()
{
    bank b;
    cout<<"------WELCOME TO AAPNA BANK------";
    cout<<"\nPLEASE HELP US BY ENTERING YOUR DETAILS";
    b.getdata();
    int c=1,ch;
    while(c==1)
    {
        cout<<"!!!!!!!MENU!!!!!!!!";
        cout<<"\n1.TO DEPOSIT AMOUNT TO THE ACCOUNT";
        cout<<"\n2.TO WITHDRAW AMOUNT FROM ACCOUNT";
        cout<<"\n3.TO DISPLAY THE DETAILS";
        cout<<"\n4.EXIT";
        cout<<"\nEnter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            b.deposit();
            break;
            case 2:
            b.withdrawl();
            break;
            case 3:
            b.display();
            break;
            case 4:
            exit;
            break;
            default:
            cout<<"SORRY WRONG CHOICE!!!!!!!";
        }
        cout<<"\nDo You Want To Continue 1 for Yes 0 for No:";
        cin>>c;
    }
    return 0;
}
 
