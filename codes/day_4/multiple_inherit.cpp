#include<iostream>
using namespace std;
class A{
 public:
    A(){cout<<"class a\n";}
};
class b
{
    public:
        b(){cout<<"class b\n";
        }
};
class c: public b,A{
public:
    c(){
    cout<<"class c\n";}
};
int main()
{
    c a;
    return 0;
}
