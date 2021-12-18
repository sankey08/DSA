#include<iostream>
using namespace std;

int main(){

    int *p = new int;   //New keyword for heap allocation
    *p = 10;

    cout << *p << endl;

    int *a = new int[20];       //Compile Time
    
    int n;
    cout << "ENter size:" << endl;
    cin >> n ;

    int* a1 = new int[n];       //Run-Time
    a1[0] = 20;
    cout << a1[0] << endl;

    return 0;

}