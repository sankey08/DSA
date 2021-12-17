#include<iostream>
using namespace std;

int main(){
    //Never keep variable uninitialized as it gives garbage value
    int i;
    cout<<&i<<endl;

    int *p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;

    return 0; 
}