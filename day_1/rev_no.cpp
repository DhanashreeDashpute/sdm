#include<iostream>
using namespace std;
int main(){
int a;

int d=1;
int rev=0;

cout<<"enter number:";
cin>>a;

while(a>0){
 d=a%10;
 rev=(rev*10)+d;
a=a/10;
}
cout<<rev;
}
