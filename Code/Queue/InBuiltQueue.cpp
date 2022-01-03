#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q1;
    q1.push(10);
    q1.push(20);
    cout << q1.front() << endl;
    q1.pop();
    cout << q1.size() << endl;

    return 0;
}