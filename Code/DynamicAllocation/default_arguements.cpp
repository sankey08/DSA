#include<iostream>
using namespace std;

//Default values can be given through the rightmost
int getElement(int a[],int si = 5 ){
    return a[si];
}

int main(){

    int a[2];
    //Read

    cout << getElement(a) << endl;

    return 0;
}