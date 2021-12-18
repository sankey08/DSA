#include<iostream>
using namespace std;

int main(){

    int m , n;
    cin >> m >> n;

    int **p = new int*[2];

    //Creating 
    for(int i=0;i < m;i++){
        p[i] = new int[i+1];     
        for(int j=0;j < n;j++){
            cin >> p[i][j];
        }
    }

    //Displaying
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << p[i][j] << "\t";
        }
        cout<< endl;
    }

    //Releasing memory
    for(int i = 0 ; i < m; i++){
        delete [] p[i];
    }

    delete [] p;

    return 0;
}