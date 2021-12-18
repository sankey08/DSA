#include<iostream>
using namespace std;

int fibo(int n){
    //Base Check
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int smallOp1 = fibo(n - 1);
    int smallOp2 = fibo(n - 2);

    return smallOp1 + smallOp2; 
 
}

int main(){
    cout << fibo(3) << endl;
    return 0;
}