#include<iostream>
using namespace std;
/*  Classes 
    A class is used to specify the form of an object and it combines data representation and methods for manipulating that data into one neat package. 
    The data and functions within a class are called members of the class.
    
    Constructors:
    The copy constructor is a constructor which creates an object by initializing it with an object of the same class, \
    which has been created previously. The copy constructor is used to −
        -Initialize one object from another of the same type.
        -Copy an object to pass it as an argument to a function.
        -Copy an object to return it from a function.

    Inline Function:
    -C++ inline function is powerful concept that is commonly used with classes. If a function is inline, 
    the compiler places a copy of the code of that function at each point where the function is called at compile time.
    -Any change to an inline function could require all clients of the function to be recompiled because compiler would need to 
    replace all the code once again otherwise it will continue with old functionality.
    -To inline a function, place the keyword inline before the function name and define the function before any calls are made to the function.
    The compiler can ignore the inline qualifier in case defined function is more than a line.   
    -A function definition in a class definition is an inline function definition, even without the use of the inline specifier. 

*/
// To declare all member functions of class A as friends of class B
class A{
    friend class B;
};

class Employee{

  static int count;
  
  public:
    int EmpId;
    string EmpName;
  
    Employee(){
        EmpId = 1001;
        EmpName = "Sanket";
        count++;
    }

    Employee(const Employee &emp); //Copy Constructor

    void display(void);

    inline int max(int,int);    //Inline Functions

    friend void calculate(Employee emp);    //Friend Function
    
     static int getCount() {
         return count;
      }

  private:
     int salary;     //Only the class and friend functions can access private members. 


};
int Employee::count = 0;
int Employee::max(int a,int b){
    return (a>b)?a:b;
}

//Defining the func body outside the class using the scope resolution operator
void Employee::display(void){
    cout<<"Employee Details:"<<endl;
    cout<<"Emp id \t"<<EmpId<<"\t Emp Name \t"<<EmpName<<endl;
}

int main(){

    cout<<"Initial Object Count: "<<Employee::getCount()<<endl;

    Employee e1;
    Employee *ptr; //Pointer to a class
    
    ptr = &e1;
    cout<<ptr->EmpId;

    e1.display();

    cout<<"Initial Object Count: "<<Employee::getCount()<<endl;

    return 0;
}