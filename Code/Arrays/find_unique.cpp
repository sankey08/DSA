// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.

#include<iostream>
using namespace std;

int findUnique(int arr[],int size){
    int ans = 0;
    
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];               //XOR operation 0^0^0^1 = 1
    }
    
    return ans;
}

int main(){

    int arr[7] = {2,1,2,3,4,3,4};
    int res = findUnique(arr,7);
    cout << res << endl;
    return 0;
}