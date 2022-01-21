#include<iostream>
using namespace std;

/*
    What is polymorphism?
    C++ polymorphism means that a call to a member function will cause a different function to be executed 
    depending on the type of object that invokes the function.

*/

class Shape{
    protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};

class Rectangle : public Shape{

    public:
        Rectangle(int a = 0,int b = 0):Shape(a,b){}

    int area () { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }

};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};

// Main function for the program
int main() {

   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   shape = &rec;
   
   // call rectangle area.
   shape->area();

   // store the address of Triangle
   shape = &tri;
   
   // call triangle area.
   shape->area();
   
   return 0;
}

/*
Current Output->

Parent class area :
Parent class area :

Reason:
The reason for the incorrect output is that the call of the function area() is being set once by the compiler as the version defined in the base class. This is called static resolution of the function call, or static linkage - the function call is fixed before the program is executed. 
This is also sometimes called early binding because the area() function is set during the compilation of the program.

*/

/* Resolution

class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0) {
         width = a;
         height = b;
      }
      By adding virtual
      virtual int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
*/

/*

Pure Virtual Functions
It is possible that you want to include a virtual function in a base class so that it may be redefined in a derived class to suit the objects of that class,
but that there is no meaningful definition you could give for the function in the base class.

class Shape {
   protected:
      int width, height;

   public:
      Shape(int a = 0, int b = 0) {
         width = a;
         height = b;
      }
      
      // pure virtual function
      virtual int area() = 0;
};

The = 0 tells the compiler that the function has no body and above virtual function will be called pure virtual function.
*/