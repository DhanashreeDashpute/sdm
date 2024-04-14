#include<iostream>
using namespace std;
int main(){
int a[10];
int sum_even=0;
int sum_odd=0;
cout<<"enter number:";
for(int i=0;i<10;i++){
 cin>>a[i];
 }

for(int i=0;i<10;i++){
 if(a[i]%2==0){
    sum_even=sum_even+a[i];
 }
  else{
sum_odd=sum_odd+a[i];
}
}
    cout<<"\nsum of even no is="<<sum_even;
    cout<<"\nsum of odd no is="<<sum_odd;
}
