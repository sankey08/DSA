#include<iostream>
using namespace std;

int main(){

    int a[10];
    cout << a <<endl;           //Address of first element
    cout<< &a[0] << endl;

    a[0] = 10;
    a[1] = 11;
    cout << *a << endl;
    cout << *(a + 1) << endl;   //Dereferencing the value

    int *p = &a[0];

    cout<< p << endl;

    cout<< &p << endl;
    cout<< &a << endl;

    cout<< sizeof(p) << endl;
    cout<< sizeof(a) << endl;

    //a = a + 1; Cannot be reassigned 

    return 0;
}