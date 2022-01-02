#include<iostream>
using namespace std;
template <typename T>
class StackUsingArrays {

    private:
        //int *data;
        T *data;
        int nextIndex;
        int capacity;

    public:
        // In case of fixed array size 
        // StackUsingArrays(int totalSize){
        //     data = new int[totalSize];
        //     nextIndex = 0;
        //     capacity = totalSize;
        // }

        //Dynamically increase the size
        StackUsingArrays(){
            data = new T[4];
            nextIndex = 0;
            capacity = 4;
        }

        //return the size of stack
        int size(){
            return nextIndex;
        }

        bool isEmpty(){
            // if(nextIndex == 0) return true;
            // return false;
            return nextIndex == 0;
        }

        //Insert element
        void push(int element){
            if(nextIndex == capacity){

                T *newdata = new T[capacity*2];
                for(int i=0; i < capacity; i++){
                    newdata[i] = data[i];
                }
                capacity *= 2;
                delete [] data;     //deallocate last array
                data = newdata;     //point to new array
                // cout << "Stack is full " << endl;
            }
            else{
                data[nextIndex] = element;
                nextIndex++;
            }
        }

        //Remove data
        T pop(){
            if(isEmpty()){ 
                cout << "Stack is empty" << endl;
                return 0;
            }
            nextIndex--;
            return data[nextIndex];
        }

        //Return top
        T top(){
            if(isEmpty()){ cout << "Stack is empty " << endl; return 0;}
            return data[nextIndex - 1];
        }

};

int main(){
    StackUsingArrays<int> s1;
   
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    cout << s1.top() << endl;

    cout << s1.size() << endl;

    cout << s1.pop() << endl;

    cout << s1.size() << endl;

    cout << s1.isEmpty() << endl; 

    return 0;
}