// Write a program to copy the contents of one array into another in the reverse order

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& newArr) {
    cout << "After reversing: ";
    for(int i = 0; i < newArr.size(); i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;
}

void copy(vector<int>& arr) {
    vector<int> vec(arr.size());
    for(int i = 0; i < vec.size(); i++) {
        vec[i] = arr[arr.size() - i - 1];
    }
    display(vec);
}

int main() {
    vector<int> arr;
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter " << size << " numbers " << endl;
    int ele;
    for(int i = 0; i < size; i++) {
        cin >> ele;
        arr.push_back(ele);
    }
    copy(arr);
    return 0;
}

