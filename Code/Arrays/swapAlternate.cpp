#include<iostream>
using namespace std;

void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }  
}

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if((i+1) < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){

    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {7,8,9,10,11};

    swapAlternate(even,6);
    print(even,6);

    cout<< endl;
    
    swapAlternate(odd,5);
    print(odd,5);

    return 0;
}