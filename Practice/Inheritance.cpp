#include<iostream>
using namespace std;

/*
    Accesibility of members 

    Public Inheritance − When deriving a class from a public base class, public members of the base class become public members of the derived class and protected members of the base class 
    become protected members of the derived class. 
    A base class's private members are never accessible directly from a derived class, but can be accessed through calls to the public and protected members of the base class.

    Protected Inheritance − When deriving from a protected base class, public and protected members of the base class become protected members of the derived class.

    Private Inheritance − When deriving from a private base class, public and protected members of the base class become private members of the derived class.

*/

//Base Class 1
class Shape{
    public:
        void setWidth(int w){
            width = w;   
        }
        void setHeight(int h){
            height = h;
        }

    protected:
        int width,height;;    
};

//Base Class 2
class Cost{
    public:
        int totalCost(int val){
            return val*300;
        }
};

//Derived Class using access specifier
class Square : public Shape,public Cost{
    public:
        int getArea(){
            return height*2;
        }
};

int main(void){

    Square obj1;    
    obj1.setHeight(10);
    cout<<obj1.getArea()<<endl;
    int area = obj1.getArea();
    cout<<obj1.totalCost(area);

    return 0;

}