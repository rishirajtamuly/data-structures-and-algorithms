// Find the element x in the array. Take array and x as input.

#include<iostream>
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
	
	int x;
	cout << "Enter the element you want to search: ";
	cin >> x;
	
	bool isPresent = false;
	for(int i = 0; i < n; i++) {
		if(arr[i] == x) {
			cout << "Element " << x << " is present at index " << i << endl;
			isPresent = true;
		} 
	}
	
	if(!isPresent) {	
		cout << "Element " << x << " is not present in array " << endl;
	}
	
	return 0;
}
