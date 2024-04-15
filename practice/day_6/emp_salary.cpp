#include<iostream>
using namespace std;
class emp{
protected:
    int id;
    string name;
    int dept;
    double salary;

public:
    emp(){
    id=0;
    name="ram";
    dept=0;
    salary=0;
    }
    emp(int id,string name,int dept,double salary){
        this->id=id;
        this->name=name;
        this->dept=dept;
        this->salary=salary;
    }
    double computeNetSalary(){
     cout<<"salary=0\n";
     }
     void display(){
     cout<<"ID= "<<id<<"  Name= "<<name<<" dept= "<<dept<<" salary= "<<salary<<endl;
     }
};
class mgr:public emp{
private :
    double perbonus;
public:
    mgr(){
    perbonus=500;
    }
    mgr(int id,string name,int dept,double salary,double perbonus):emp(id,name,dept,salary){
    this->perbonus=perbonus;
    }
    double computeNetSalary(){
    salary=salary+perbonus;
    }
     void display(){
     cout<<"  id= "<<id<<"  name= "<<name<<"  dept= "<<dept<<"  salary= "<<salary<<endl;
     }
};
class wrk:public emp{
private :
    int hrsw;
    int hrsr;
public:
    wrk(){
    hrsw=500;
    }
    wrk(int id,string name,int dept,int hrsw):emp(id,name,dept,salary){
    this->hrsw=hrsw;
   // this->hrsr=hrsr;
    }
    void set_hrsr(int hrsr){
        this->hrsr=hrsr;
    }
    int get_hrsr(){
    return hrsr;
    }
    double computeNetSalary(){
    salary=salary+(hrsr*hrsw);
    }
     void display(){
     cout<<"  id= "<<id<<"  name= "<<name<<"  dept= "<<dept<<"   salary= "<<salary<<endl;
     }
};
int main(){
    cout<<"employee class\n";
emp e;
emp e1(10,"sita",2,2500);
e1. computeNetSalary();
e1.display();
e.computeNetSalary();
e.display();
cout<<"\n manager class\n";
mgr m;
m.computeNetSalary();
m.display();
mgr m1(10,"krish",50,25000,500);
m1.computeNetSalary();
m1.display();
cout<<"\nworker class\n";
wrk w;
w.computeNetSalary();
w.display();
wrk w1(15,"krishna",60,400);
w1.set_hrsr(10);
w1.get_hrsr();
w1.computeNetSalary();
w1.display();

}
