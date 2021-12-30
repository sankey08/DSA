#include<iostream>
using namespace std;

template <typename T>           //Generic 

class Node{

    public:
        T data;
        Node<T> *next;

    Node(T data){
        this -> data = data;
        next = NULL;
    }

};

template <typename T>
class Stack{

    Node<T> *head;
    int size;       // no of element in stack

    public:

        Stack(){
            head = NULL;
            size = 0;
        }

        int getSize(){
            return size;
        }

        bool isEmpty(){
            return (head==NULL);
        }

        void push(T element){
            Node<T> *newNode = new Node<T>(element);
            newNode->next = head;
            head = newNode;
            size--;
        }

        T pop(){
            if(!isEmpty()){
            T ans = head->data;
            Node<T> *temp = head; 
            head = head->next;
            delete temp;
            size--; 
            return ans;
            }
            cout << " Stack is empty " << endl; 
        }

        T top(){
            if(!isEmpty()) return head->data;
        }
};

int main(){

    Stack<int> n1;
    n1.push(10);
    n1.push(20);
    n1.push(30);
    n1.push(40);
    n1.push(50);

    cout << n1.getSize() << endl;

    cout << n1.pop() << endl;

    cout << n1.getSize() << endl;
    return 0;
}