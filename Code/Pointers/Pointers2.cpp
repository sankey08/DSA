#include<iostream>
using namespace std;

int main(){
   
    int i = 10;
    int *p = &i;

    int *q = p;     //Points to i location 

    cout<< i << endl;

    i++;

    cout<< i << endl;
    cout<< *p << endl;  //Value changes as same storage

    int a = i;
    a++;

    cout<< a << endl;
    cout<< *p << endl;  //No changes as diffrent storages
    
    (*p)++;             //Both i++ and this is same
    cout<< *p << endl; 

    return 0; 
}