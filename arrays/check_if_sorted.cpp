// Check if the given array is sorted or not

#include<iostream>
#include<vector>
using namespace std;

void sorted(vector<int>& arr) {
    int s = arr.size();
    bool flag = true;  // true means sorted
    for(int i = 0; i < s - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            flag = false;  // false means unsorted
            break;
        }
    }
    if(flag) {
        cout << "Array is Sorted" << endl;
    } else {
        cout << "Array is Unsorted" << endl;
    }
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter " << n << " values" << endl;
    int ele;
    for(int i = 0; i < n; i++) {
        cin >> ele;
        arr.push_back(ele);
    }
    sorted(arr);
    return 0;
}
