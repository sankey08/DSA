#include<iostream>
using namespace std;

int main(){

    int i;
    cout<< i << endl;

    //Risky bcoz it points to any randomm garbage and can be critical   
    int *p;
    cout<< p << endl;

    //To avoid this always initialize null 
    p = 0;
    
    return 0;
}