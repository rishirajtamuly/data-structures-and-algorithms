/*
Two Pointers
Sort the array of 0’s and 1’s in a single pass(only one loop).
*/


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
    int i = 0;
    int j = arr.size() - 1;
    while(i < j) {
        if(arr[i] == 0) {
            i++;
        }
        if(arr[j] == 1) {
            j--;
        }
        if(i > j) {
            break;
        }
        if(arr[i] == 1 && arr[j] == 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
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
