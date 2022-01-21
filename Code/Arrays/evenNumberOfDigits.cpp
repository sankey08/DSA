#include<iostream>
#include<vector>
using namespace std;

int countDigit(int num){
	int count = 0;
    // if( num < 0 ){
    //     return num;
    // }
	while( num > 0){
		num = num / 10;
		count++;
	}
    return count;
}

vector<int> getEvenDigitNumbers(vector<int> &arr) {
    // add your logic here
	vector<int> resultArr;	
		
	if( arr.size() == 0 || arr.size() >=100 ) {
		return arr;
	}

	for( int i = 0 ; i < arr.size() ; i++ ){
        if ( (countDigit(arr[i]) % 2) == 0 && (arr[i] > 0) ) {
		    resultArr.push_back(arr[i]);
        }
	}

	return resultArr;
}
int main(){

    vector<int> numbers{0,11,-234,3333,421,5}; 

    vector<int> output = getEvenDigitNumbers(numbers);

    for (int x : output)
        cout << x << " ";

    return 0;
}