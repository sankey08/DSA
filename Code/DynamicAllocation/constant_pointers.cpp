#include<iostream>
using namespace std;

void f(const int *p){
  //(*p)++;
}

int main(){

    const int i =10;
    //int *p = &i;      Cannot allow to store address in pointer
    const int *p = &i;  //Doable
    
    int  j = 12;
    int *p1 = &j;
    f(p1);
    
    int const *p2 = &j;
    j++;

    cout<< *p2 << endl;

    return 0;
}