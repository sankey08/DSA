#include<iostream>
using namespace std;

/* 

    C++ allows you to specify more than one definition for a function name or an operator in the same scope, which is called function overloading and operator overloading respectively.

    An overloaded declaration is a declaration that is declared with the same name as a previously declared declaration in the same scope, except that both declarations have different arguments 
    and obviously different definition (implementation).

    When you call an overloaded function or operator, the compiler determines the most appropriate definition to use, by comparing the argument types you have used to call the function or operator 
    with the parameter types specified in the definitions. 
    The process of selecting the most appropriate overloaded function or operator is called overload resolution.

*/

class Printdata{
    public:
        void print(int s){
            cout<<"Print Int"<<s<<endl; 
        }
        void print(double s){
            cout<<"Print Int"<<s<<endl; 
        }
        void print(string s){
            cout<<"Print Int"<<s<<endl; 
        }
};

int main(void){

    Printdata obj;

    obj.print(1);
    obj.print(92.87);
    obj.print("Sanket");

    return 0;
}