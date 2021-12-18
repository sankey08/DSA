#include<iostream>
using namespace std;

//Pass by reference
void increment(int& n){
    n++;
}

//Bad Practice : Return by reference
int& f(int n){
    int a = n;
    return a;
}
 
int main(){
  
    int i = 10;
    int& j = i; //Reference variable

    int& k = f(i);

    increment(i);   
    cout  <<  i << endl;

    i++;
    cout << j << endl;

    return 0;
}