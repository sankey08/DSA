#include<iostream>
using namespace std;

bool isSorted(int a[],int size){
    if(size == 0 || size == 1){
        return true;
    } 
    if(a[0] > a[1]){
        return false;
    }
    bool isSmallerSorted = isSorted(a+1,size-1);
    return isSmallerSorted;
}

int main(){

    int arr[5] = {2,3,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << size << endl;
    cout << isSorted(arr,size) << endl;

    return 0;
}