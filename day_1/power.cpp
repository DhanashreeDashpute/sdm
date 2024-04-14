#include<iostream>
using namespace std;
int main()
{
int base=3;
int power=4;
int sum=1;
for(int i=1;i<=power;i++){
    sum=sum*base;
}
cout<<"power 4 to base 3 is = "<<sum;
}
