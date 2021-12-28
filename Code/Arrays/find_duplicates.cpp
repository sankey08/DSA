#include<iostream>
using namespace std;

int main(void){

    int arr[5] = {1,2,3,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = 0;

    for(int i=0; i < size; i++){
        ans = ans ^ arr[i];
        cout << ans << " at position" << i << endl;
    }
    cout << ans << endl;
    cout << endl;

    for(int i=1; i < size; i++){
        ans = ans ^ i;
        cout << ans << " at position" << i << endl;
    }
    cout << "Final ans : " << ans << endl;
    return 0; 
}