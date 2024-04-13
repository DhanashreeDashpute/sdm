#include<iostream>
using namespace std;
class Box1;
class Box{

	public:int l,b,h;
	public:Box(){
		l=100;
		b=200;
		h=50;
	       }
	       Box(int l,int b,int h)
	       {
	       	this->l=l;
	       	this->b=b;
	       	this->h=h;

		   }
		   void show(){
		   	cout<<"  Length="<<l<<endl;
		   	cout<<"  Breadth="<<b<<endl;
		   	cout<<"  Height="<<h<<endl;

		   }
        friend int addl(Box ,Box1);
        friend int addb(Box ,Box1);
        friend int addh(Box ,Box1);
};
class Box1{

	public:int l,b,h;
	public:Box1(){
		l=b=h=10;
	       }
	       Box1(int l,int b,int h)
	       {
	       	this->l=l;
	       	this->b=b;
	       	this->h=h;

		   }
		   void show(){
		   	cout<<"  Length="<<l<<endl;
		   	cout<<"  Breadth="<<b<<endl;
		   	cout<<"  Height="<<h<<endl;

		   }
        friend int addl(Box ,Box1);
        friend int addb(Box ,Box1);
        friend int addh(Box ,Box1);
};

int addl(Box b, Box1 c){

return(b.l+c.l);
}
int addb(Box b, Box1 c){

return(b.b+c.b);
}
int addh(Box b, Box1 c){

return(b.h+c.h);
}

int main()
{
Box a;
Box1 b;




cout<<addl(a,b)<<endl;
cout<<addb(a,b)<<endl;
cout<<addh(a,b)<<endl;
	//Box boxObj2(100,100,100);
	//boxObj.show();

	//Box boxObj3=boxObj+boxObj2;
	//boxObj3.show();//120 140 150;

}

