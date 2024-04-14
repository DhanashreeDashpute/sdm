#include<iostream>
using namespace std;
class Animal{
	public: int weight;
			string name;
			int age;

	public:

	void accept(int weight,string name,int age)
	{
	this->weight=weight;
	this->name=name;
	this->age=age;

	}

	void display(){
		cout<<"details are: weight= "<<weight<<"   name= "<<name<<"  age="<<age<<endl;
	}

};
class bird : public Animal{
int wings;
public:bird()
	{
		cout<<"----default bird----"<<endl;
		wings=2;
	}
	bird(int weight,string name,int age,int wings):Animal(weight,name,age)
	{
		cout<<"-----parameter constr  bird-----"<<endl;

		this->wings=wings;//valid

	}
};

int main()
{
	Animal obj;
	obj.accept(10,"sparrow",5);
	obj.display();
    bird obj1();
  // obj1.accept(10,"parrot",10);
  // obj1.display();



	//bird obj1;

	//obj1.display();
}
