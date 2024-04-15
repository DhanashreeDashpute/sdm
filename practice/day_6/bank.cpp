#include<iostream>
using namespace std;
class account
{
protected:
    string name;
    int accno;
    string atype;
public:
    account(){
    name="riya";
    accno=10;
    atype="ss";
    }
    account(string name,int accno,string atype){
    this->name=name;
   this->atype=atype;
   this->accno=accno;
    }
    void displayDetails()
    {
        cout<<"\n\nCustomer Name : "<<name;
        cout<<"\nAccount Number  : "<<accno;
        cout<<"\nAccount Type    : "<<atype;
    }
};
class saving_account : public account
{
private:
    float sav_balance=0;
public:

saving_account(){
    }
    saving_account(string name,int accno,string atype){
    this->name=name;
   this->atype=atype;
   this->accno=accno;
    }
    void displayDetails()
    {
        cout<<"\n\nCustomer Name : "<<name;
        cout<<"\nAccount Number  : "<<accno;
        cout<<"\nAccount Type    : "<<atype;
    }
    void s_deposit()
    {
        float deposit,interest;
        cout<<"\nsaving acc Enter amount to Deposit :  ";
        cin>>deposit;
        sav_balance = sav_balance + deposit;
        interest=(sav_balance*2)/100;
        sav_balance=sav_balance+interest;
    }
    void s_withdraw()
    {
        float withdraw;
        cout<<"\nBalance : "<<sav_balance;
        cout<<"\nEnter amount to be withdraw : ";
        cin>>withdraw;
        if(sav_balance >withdraw)
        {
            sav_balance=sav_balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<sav_balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
    }
     void s_display()
    {
        cout<<"\nBalance :  "<<sav_balance;
    }
};

int main(){
saving_account sa;
sa.displayDetails();
sa.s_deposit();
sa.s_withdraw();
saving_account sa2("siya",10,"10");
sa2.displayDetails();
sa2.s_deposit();
sa2.s_withdraw();


}


