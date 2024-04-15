#include<iostream.>
using namespace std;
class shape{
public:
    void show()
    {
    cout<<"this is shape\n";
    }
   virtual void area()=0;
    };
class circle:public shape{
public:
    int rad;
    circle(){
    cout<<"circle default"<<endl;
    }
    circle(int x){
        rad=x;
    }
void area(){
double y=3.14*rad*rad;
cout<<"area of circle is "<<y<<endl;
}
};
class rectangle: public shape{
public:
    int len,bred,height;
    rectangle(){
    cout<<"area is 0\n";
    }
    rectangle(int y,int z,int h){
    len=y;
    bred=z;
    height=h;
    }
   void area(){
    int z=bred*len;
    cout<<"area of rectangle is: "<<z;
    }

};
class triangle: public shape{
public:
    int base,height,side;
    triangle(){
    cout<<"area is 0\n";
    }
    triangle(int y,int z,int a){
    base=y;
    height=z;
    side=a;
    }
   void area(){
    double z=0.5*base*height;
    cout<<"\narea of triangle is: "<<z;
    }

};
int main()
{
  circle c(5);
   c.area();

   rectangle r(10,10,10);
   r.area();

   triangle t(6,12,10);
     t.area();

}
