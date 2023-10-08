//  Sort the array of 0’s and 1’s .

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& arr) {
    cout << "After sorting: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort01(vector<int>& arr) {
    int n = arr.size();
    int noOfZeroes = 0;
    int noOfOnes = 0;

    // counting 0's and 1's
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            noOfZeroes++;
        } else {
            noOfOnes++;
        }
    }

    // filling elements
    for(int i = 0; i < n; i++) {
        if(i < noOfZeroes) {
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
    }
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int ele;
    cout << "Enter " << n << " numbers " << endl;
    for(int i = 0; i < n; i++) {
        cin >> ele;
        arr.push_back(ele);
    }
    sort01(arr);
    display(arr);
    return 0;
}
