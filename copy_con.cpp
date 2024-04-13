#include<iostream>
#include<string.h>
using namespace std;
 class Account{

 	public: int id;
 			char name[20];
 			int amount;

 	public: Account()
	 {
	 cout<<"-----default constructor------"<<endl;
	  id = 101;  amount=50000;
	  strcpy(name,"Ram");
 	}

 	Account(int a,char* name,int amt)
 	{
 		cout<<"----Parameterize constructor-----"<<endl;
 		id=a;
 		strcpy(this->name,name);
 		amount=amt;
    cout<<"id "<<id<<" name "<<name<<" amount "<<amount<<endl;
    }
	 Account(Account &t){
        cout<<"\nthis is copy constructor"<<endl;
        id=t.id;
        strcpy(name,t.name);
        amount=t.amount;
        cout<<" id "<<id<<" name "<<name<<" amount "<<amount<<endl;
	 }

	void accept(int a,char* name, int amt)
	{
		cout<<"\nAccepting the parameter value:"<<endl;
		this->id=a;
 		strcpy(this->name,name);
 		this->amount=amt;
    cout<<" id "<<id<<" name "<<name<<" amount "<<amount<<endl;
	}

	void display()
	{
		cout<<"   Id="<<id<<"  Name=" <<name<<" Amount= "<<amount<<endl;
	 }
 };

 int main()
 {
 	Account obj(1,"yy",10);
Account obj1(obj);
cout<<obj1.id<<endl;
cout<<obj1.amount<<endl;
obj.accept(10,"dd",45);
obj.display();
 }
