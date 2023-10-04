// Count the number of elements in given array greater than a given number x.

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
	cout << "Enter a number: ";
	cin >> x;
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] > x) {
			count++;
		}
	}
	cout << "Number of elements greater than " << x << " is " << count << endl;

	return 0;
}
