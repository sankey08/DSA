#include<iostream>
using namespace std;

int sum(int a[],int size){
    //Check size of array , bcoz it will be passed as a pointer to function while calling
    //cout << sizeof (a) << endl;
    int ans = 0 ;
    for (int i = 0; i < size; i++)
    {
        /* code */
        ans += i[a];
    }
    
    return ans;
}

int main(){

    int a[5]; 
    cout<< sizeof(a) << endl;
    
    cout << sum(a,10) << endl;  //Passing array as pointer
    cout << sum(a+4,6) << endl; //Part of an array 
    
    return 0;
}