#include <iostream>
using namespace std;
int main() {
      int choice,r,l,w,b,h;  // Declare variables to store user input and dimensions.
      float area;  // Declare a variable to store the calculated area.

      // Display the options to the user.
      cout<<"Input 1 for area of circle\n";
      cout<<"Input 2 for area of rectangle\n";
      cout<<"Input 3 for area of triangle\n";
      cout<<"Input your choice : ";
      cin>>choice;  // Read and store the user's choice.

      switch(choice)  // Start a switch statement based on the user's choice.
      {
           case 1:
                 cout<<"Input radius of the circle : ";  // Prompt user for circle's radius.
                cin>>r;  // Read and store the radius.
                 area=3.14*r*r;  // Calculate the area of the circle.
                 break;
            case 2:
                  cout<<"Input length and width of the rectangle : ";  // Prompt user for rectangle's dimensions.
                  cin>>l>>w;  // Read and store length and width.
                  area=l*w;  // Calculate the area of the rectangle.
                  break;
            case 3:
                  cout<<"Input the base and height of the triangle :";  // Prompt user for triangle's base and height.
                 cin>>b>>h;  // Read and store base and height.
                  area=.5*b*h;  // Calculate the area of the triangle.
                  break;
          }

         cout<<"The area is :"<<area;  // Display the calculated area.
}
