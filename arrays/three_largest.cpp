// WAP to find the largest three elements in the array.

#include<iostream>
#include<vector>
using namespace std;

void largest(vector<int>& arr) {
    int size = arr.size();
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;
    int thirdMax = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(firstMax < arr[i]) {
            firstMax = arr[i];
        }
    }
    for(int i = 0; i < size; i++) {
        if(secondMax < arr[i] && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }
    for(int i = 0; i < size; i++) {
        if(thirdMax < arr[i] && arr[i] != firstMax && arr[i] != secondMax) {
            thirdMax = arr[i];
        }
    }
    cout << "First largest element: " << firstMax << endl;
    cout << "Second largest element: " << secondMax << endl;
    cout << "Third largest element: " << thirdMax << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter " << n << " values" << endl;
    int ele;
    for(int i = 0; i < n; i++) {
        cin >> ele;
        arr.push_back(ele);
    }
    largest(arr);
    return 0;
}
