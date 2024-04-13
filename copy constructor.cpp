#include <iostream>
using namespace std;
class box{
public:
    int len,bred;
    box(int l,int b){
        this->len=l;
        this->bred=b;
    cout<<"l="<<l<<" b="<<b<<endl;
    }
    box(box &a){
        len=a.len;
        bred=a.bred;
    }
};

int main(){
box b(5,6);
box c(b);
cout<<c.bred;



}
