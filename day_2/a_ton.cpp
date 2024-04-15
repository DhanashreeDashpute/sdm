#include<iostream>
using namespace std;
int main()
{
 int n,j=1;
 char a;
 cout<<"enter char :";
cin>>a;
cout<<"enter limit :";
 cin>>n;
 while(j<=n)
 {
  a=a+1;
  if(a=='z' || a=='Z')
  {
   cout<<"large limit\n";
   j=n;
  }
  else
  cout<<a;
  j++;
 }
}


