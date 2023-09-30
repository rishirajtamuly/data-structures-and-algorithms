// Calculate the sum of all the elements in the given array

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
	
	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += arr[i];
	}
	cout << "Sum of all the elements in array is " << sum << endl;
	
	return 0;
}
