// Find the second largest element in the given array.

#include<iostream>
#include<climits>
using namespace std;

int main() {
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	
	cout << "Enter " << n << " elements in array: " << endl;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int max = INT_MIN;
	for(int i = 0; i < n; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
	}

	int secondMax = INT_MIN;
	for(int i = 0; i < n; i++) {
		if((arr[i] != max) && (secondMax < arr[i])) {
			secondMax = arr[i];
		}
	}
	cout << "Second largest value in array = " << secondMax << endl;
		
	return 0;
}
