// Count the number of triplets whose sum is equal to the given value x.

#include<iostream>
#include<vector>
using namespace std;

int countTriplets(vector<int>& arr, int x) {
    int s = arr.size();
    int flag = 0;
    for(int i = 0; i < s - 2; i++) {
        for(int j = i + 1; j < s - 1; j++) {
            for(int k = j + 1; k < s; k++) {
                if(arr[i] + arr[j] + arr[k] == x) {
                    flag++;
                }
            }
        }
    }
    return flag;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter " << n << " values in array" << endl;
    int ele;
    for(int i = 0; i < n; i++) {
        cin >> ele;
        arr.push_back(ele);
    }
    cout << "Number of triplets whose sum is equal to " << x << " is " << countTriplets(arr, x) << endl;
    return 0;
}
