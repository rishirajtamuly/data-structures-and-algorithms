// Find the maximum value out of all the elements in the array

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
	
	cout << "Elements in array are: ";
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	int max = INT_MIN;
	for(int i = 0; i < n; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
	}
	cout << "Maximum value in array = " << max << endl;
	
	return 0;
}
