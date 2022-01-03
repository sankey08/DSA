#include<iostream>
using namespace std;
template <typename T>
class Node{

    public:
        T data;
        Node<T> *next;

        Node(T data){
            this->data = data;
            next = NULL;
        }
};  

template <typename T>
class Queue{

    Node<T> *head;
    Node<T> *tail;
    int size;

    public:

    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void enqueue(T element){
        Node<T> *newNode = new Node<T>(element);
        //For first element when queue/ll is empty
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail = tail->next;
            tail = newNode;
        }
        size++;
    }

    T dequeue(){
        if(isEmpty()){
            return 0;
        }
        T ans = head->data;     //Storing node data which is deleted
        Node<T> *temp = head;   //Temporarily store head ka data
        head = head->next;      //Move head to head ka next
        delete temp;            //deallocate memory
        size--;                 //decrease size
        return ans;             //return that stored node ka data
    }

    T front(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

};