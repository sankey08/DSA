#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,3};
    char b[] = "abc";

    cout << a << endl;
    cout << b << endl; 

    char *c = &b[0];    //Character array
    cout << c << endl;

    char c1 = 'a';
    char *pc = &c1;     //Character Pointer

    cout<< pc << endl;  

    return 0; 
}