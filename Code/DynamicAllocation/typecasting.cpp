#include<iostream>
using namespace std;

int main(){

    int i = 65;
    char c = i;     //Implicit Typecasting
    cout << c << endl;

    int *p = &i;
    char *pc = (char*)p;    //Explicit Typecasting

    cout << p << endl;
    cout << pc << endl;     //Print the output string until it finds null character
    
    cout << *p << endl;
    cout<< *pc << endl;     //Treats as a character
    cout << *(pc + 1) << endl; 
    cout << *(pc + 2) << endl; 
    cout << *(pc + 3 ) << endl; 

    return 0;

}