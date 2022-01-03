#include<iostream>
#include<vector>
using namespace std;

int main(){

    //vector<int> *v1 = new vector<int>(); //Dynamically
    vector<int> v1;
    v1.push_back(10);   
    v1.push_back(20);

    //Can do this but it wont restricts to a fixed size vector
    //Only use for modification and update
    // v1[2] = 100;
    // v1[3] = 300;
    
    v1.push_back(40);
    v1.push_back(50);

    v1.pop_back();      //last element gets deleted

    // for(int i = 0; i < v1.size(); i++){
    //     cout << v1[i] << endl;
    // }

    cout<< v1.at(2) << endl;        //Safe check : will throw error if not present


    return 0;
}