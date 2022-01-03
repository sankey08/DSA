#include<iostream>
using namespace std;
#include "QueueUsingLinkedList.h"

int main(){

    Queue<int> q1;

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30); 
    q1.enqueue(40);
    // q1.enqueue(50);
    // q1.enqueue(60);
    // q1.enqueue(70);
    // q1.enqueue(80);


    cout << q1.front() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.front() << endl;
    cout << "H" << endl;
    cout << q1.getSize() << endl;


    return 0;
}