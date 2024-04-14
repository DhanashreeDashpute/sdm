#include<iostream>
using namespace std;
int main()
{
int a,r,sum=0,temp;
printf("enter the number=");
cin>>a;
temp=a;
while(a>0)
{
r=a%10;
sum=sum+(r*r*r);
a=a/10;
}
if(temp==sum)
printf("armstrong  number ");
else
printf("not armstrong number");
return 0;
}
