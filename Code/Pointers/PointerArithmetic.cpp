#include<iostream>
using namespace std;

int main(){

    int i = 10;
    int *p = &i;

    cout<< p << endl;
    p++;                //Move to the address by 4 byte
    cout<< p << endl;

    return 0;
}