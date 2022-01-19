#include<iostream>
#include<vector>
using namespace std;

vector<int> getCumulativeSum(vector<int> &arr) {
	// add your logic here
	int sumResult = 0;
	vector<int> result;
	//int size = sizeof(arr[0])/arr;
	for( int i = 1 ; i < arr.size() ; i++ ){
		for( int j = 0 ; j < i ; j++){
            //cout << arr[j];
			sumResult += arr[j];
		}
		result.push_back(sumResult);
        sumResult = 0;
	}
	return result;
}

int main(){

    vector<int> numbers{1,-2,3,4,5}; 

    vector<int> output = getCumulativeSum(numbers);

    for (int x : output)
        cout << x << " ";

    return 0;
}
