/*
Two Pointers
Write a program to reverse the array without using any extra array
*/

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& arr) {
    cout << "After reversing: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(vector<int>& arr) {
    int i = 0;
    int j = arr.size() - i - 1;
    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

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
    reverseArray(arr);
    display(arr);
    return 0;
}
