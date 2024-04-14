#include<iostream>
#include<stdio.h>
using namespace std;
bool flag;
int main()
{
int a;
a=13;
printf("%d is",a);
for(int i=2;i<a;i++){
if(a%i==0){
    flag=1;
    break;
}
else
    flag=0;
}
if(flag==0)
cout<<" prime number";
else
    cout<<" not prime";
}
