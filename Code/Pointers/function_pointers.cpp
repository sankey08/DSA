#include<iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}
//Trying to change address but not changing
void incrementPointer(int *p){
    p = p + 1;    
}

//Trying to change value which does change
void increment(int *p){
    (*p)++;    
}
int main(){

    int a = 10;
    int *p = &a;
    print(p);

    cout << p << endl;
    incrementPointer(p);
    cout<< p << endl;

    cout << *p << endl;
    increment(p);
    cout << *p << endl;

    return 0;
}