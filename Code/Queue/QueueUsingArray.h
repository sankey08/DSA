#include<iostream>
using namespace std;
template <typename T>
class QueueUsingArray
{
private:
    /* data */
    T *data;
    int ni;     //Ni = nextindex
    int fi;     //fi = firstindex
    int size;   
    int capacity;

public:
    QueueUsingArray(int s){
        data = new T[s];
        ni = 0;
        fi = -1;
        size = 0;
        capacity = s;
    }

    int getSize(){
        return size;
    }    

    bool isEmpty(){
        return size == 0;
    }

    void enqueue(T element){
        if(size == capacity){

            T *newData = new T[2*capacity];    
            int j = 0;

            //Traverse from front to last
            for(int i = fi ; i < capacity ; i++){
                newData[j] = data[i];
                j++;
            }

            //Traverse from first till front
            for(int i = 0; i < fi ; i++){
                newData[j] = data[i];
                j++;
            }

            delete [] data;
            data = newData;
            fi = 0;
            ni = capacity;
            capacity *= 2;
            //cout << "QUeue is Full " << endl;

        }
        else {
            data[ni] = element;
            ni = (ni + 1) % capacity;       //Allocating new data to the start of queue 
            if(fi == -1){ 
                fi = 0;
            }
            size++;
        }
    }   

    T front(){
        if(fi == -1){
            cout << "Queue is empty" << endl;
            return 0;
        }
        else{
            return data[fi];
        }
    }

    T dequeue(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return 0;
        }
        T ans = data[fi];
        fi = (fi + 1) % capacity;
        size--;
        //When queue gets completely empty
        if(size == 0){
            fi = -1;
            ni = 0;
        }
        return ans;   
    }

};
