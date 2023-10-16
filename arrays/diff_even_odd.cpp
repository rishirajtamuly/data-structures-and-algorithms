// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<iostream>
#include<vector>
using namespace std;

void differenceEvenOdd(vector<int>& arr) {
    int sumEven = 0;
    int sumOdd = 0;
    for(int i = 0; i < arr.size(); i++) {
        (i % 2 == 0) ? sumEven += arr[i] : sumOdd += arr[i];
    }
    cout << sumEven - sumOdd << endl;
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
    differenceEvenOdd(arr);
    return 0;
}
