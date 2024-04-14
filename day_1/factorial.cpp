#include<iostream>
using namespace std;
int main(){
int a;
int fact=1;
cout<<"enter number\n";
cin>>a;
for(int i=1;i<=a;i++){
     fact=fact*i;
}

cout<<"factorial is "<<fact<<endl;

}
