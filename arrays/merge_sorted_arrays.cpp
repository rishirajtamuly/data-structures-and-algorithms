// Merge two sorted arrays . (LeetCode - 88)

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& arr) {
    cout << "After merging: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeArray(vector<int>& arr1, vector<int>& arr2) {
    int m = arr1.size();
    int n = arr2.size();
    vector<int> res(m + n);

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while(i >= 0 && j >= 0) {
        if(arr1[i] > arr2[j]) {
            res[k] = arr1[i];
            i--;
            k--;
        } else {
            res[k] = arr2[j];
            j--;
            k--;
        }
    }
    if(i == -1) {
        while(j >= 0) {
            res[k] = arr2[j];
            j--;
            k--;
        }
    }
    if(j == -1) {
        while(i >= 0) {
            res[k] = arr1[i];
            i--;
            k--;
        }
    }
    display(res);
}

int main() {
    int x;
    cout << "Enter size of 1st array: ";
    cin >> x;
    vector<int> arr1;
    int ele1;
    cout << "Enter " << x << " values" << endl;
    for(int i = 0; i < x; i++) {
        cin >> ele1;
        arr1.push_back(ele1);

    }

    int y;
    cout << "Enter size of 2nd array: ";
    cin >> y;
    vector<int> arr2;
    int ele2;
    cout << "Enter " << y << " values" << endl;
    for(int i = 0; i < y; i++) {
        cin >> ele2;
        arr2.push_back(ele2);

    }
    mergeArray(arr1, arr2);
    return 0;
}
