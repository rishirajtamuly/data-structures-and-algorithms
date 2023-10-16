/* Given an array of integers, change the value of all odd indexed elements to its second multiple
and increment all even indexed value by 10. */

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void modify(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(i % 2 != 0) {
            arr[i] *= 2;
        } else {
            arr[i] += 10;
        }
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
    cout << "Before modifying: ";
    display(arr);
    modify(arr);
    cout << "After modifying: ";
    display(arr);
    return 0;
}
