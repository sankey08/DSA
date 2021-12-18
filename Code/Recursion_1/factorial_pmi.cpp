#include<iostream>
using namespace std;

int factorial (int n){
    //Base CHeck
    if( n == 0 ){
        return 1;
    }
    //Hypthesis & step
    int smallOutput = factorial ( n -1 );
    int output = n * smallOutput;

    return output;
} 

int main(){

    int a = 10;
    cout << factorial(a);

    return 0;
}