#include<iostream>
using namespace std;

int main(){

    const int  i= 10;
    const int i2 = 12;
    //i = 12;           Can not change

    //Constant reference from non-const int
    int j = 12;
    const int &k = j;

    cout << j+1 << endl;

    // cocnst to const reference
    const int j2 = 12;
    const int &k2 = j2;

    // reference from a const int
    const int j3 = 123;
    //int &k3 = j3;     Not allowed

    return 0;
}