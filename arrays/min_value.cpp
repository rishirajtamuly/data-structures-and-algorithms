// Find the minimum value out of all elements in the array

#include<iostream>
#include<vector>
using namespace std;

int minimumValue(vector<int>& myVector) {
    int min = INT_MAX;
    int size = myVector.size();
    for(int i = 0; i < size; i++) {
        if(myVector[i] < min) {
            min = myVector[i];
        }
    }
    return min;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter " << n << " values: ";
    int e;
    for(int i = 0; i < n; i++) {
        cin >> e;
        arr.push_back(e);
    }
    cout << "Minimum value in array is " << minimumValue(arr) << endl;
    return 0;
}
