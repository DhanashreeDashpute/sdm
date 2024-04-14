#include<iostream>
#include<stdio.h>
using namespace std;
bool flag;
int main()
{
int a;
cout<<"enter the number range:";
cin>>a;
int b=1;
while(b<a){
for(int i=2;i<b;i++){
if(b%i==0){
    flag=1;
    break;
}
else
    flag=0;
}
if(flag==0)
cout<<b<<endl;
    b++;
}
}
