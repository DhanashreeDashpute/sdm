#include<iostream>
using namespace std;


int main()
{
	//
	cout<<"1:margrita 2: onion   3: totamo 50 4 :exit"<<endl;

	int ch,qty;
	int total=0;
	do{
	cout<<"enter choice:"<<endl;
	cin>>ch;
    switch(ch)
	{
	case 1:cout<<"Enter Qty margrita"<<endl;
	       cin>>qty;
	       total+=qty*210;
	     break;
	case 2:cout<<"Enter Qty onion pizza "<<endl;
	       cin>>qty;
	       total+=qty*110;

	     break;
	case 3:cout<<"Enter Qty tomato pizza "<<endl;
	       cin>>qty;
	       total+=qty*90;

	     break;
	case 4:cout<<"Total Amount="<<total<<endl;

	     break;
	default:cout<<"invalid choice:"<<endl;
	break;
    }
	}while(ch!=4);
	cout<<"----Thank You  ----- Total="<<total<<endl;


}
