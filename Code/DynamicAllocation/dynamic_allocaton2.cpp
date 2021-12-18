#include<iostream>
using namespace std;

int main(){
  
    int *p =  new int;
    *p = 10;
    cout << *p << endl;

    delete p;

    cout << *p << endl;

    p = new int[100];
    delete [] p;        //manually release the memory in heap not the pointer

    return 0;
}