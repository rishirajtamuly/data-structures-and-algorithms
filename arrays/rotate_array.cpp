/*
Rotate the given array ‘a’ by k steps, where k is non-negative.
Note : k can be greater than n as well where n is the size of array ‘a’.
*/

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& arr) {

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reveresePart(vector<int>& a, int i, int j) {
    while(i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main() {
    vector<int> a;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter " << n << " numbers " << endl;
    int ele;
    for(int i = 0; i < n; i++) {
        cin >> ele;
        a.push_back(ele);
    }

    int k;
	  cout << "Enter number of steps: ";
	  cin >> k;

	  cout << "\nBefore rotating elements of array: ";
	  display(a);

	  int s = a.size();
	  if(k > s) {
        k = k % s;
	  }
    reveresePart(a, 0, s - k - 1);
    reveresePart(a, s - k, s - 1);
    reveresePart(a, 0, s - 1);
    cout << "After rotating: ";
    display(a);

    return 0;
}
