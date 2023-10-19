// Find the first non-repeating element in the array.

#include<iostream>
#include<vector>
using namespace std;

void firstNonRepeating(vector<int>& arr) {
    int n = arr.size();
    bool flag = false;
    for(int i = 0; i < n; i++) {
        int j;
        for(j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                break;
            }
        }
        if(j == n) {
            cout << arr[i] << " is the first non-repeating element" << endl;
            flag = true;
            break;
        }
    }
    if(!flag) {
        cout << "There is no non-repeating element in the array" << endl;
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " values " << endl;
    for(int i = 0; i < n; i++) {
       cin >> arr[i];
    }
    firstNonRepeating(arr);
    return 0;
}
