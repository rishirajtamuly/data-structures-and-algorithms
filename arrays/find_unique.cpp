/* Find the unique number in a given Array where all the elements are being repeated
twice with one value being unique. */


#include<iostream>
#include<vector>
using namespace std;

void uniqueNumber(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        bool flag = true; // true means unique
        for(int j = 0; j < n; j++) {
            if(i == j) {
                continue;
            }
            if(arr[i] == arr[j]) {  // not unique
                flag = false;
                break;
            }
        }
        if(flag == true) {
            cout << arr[i] << endl;
            break;
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
    for(int i = 0; i < n; i++) {    // 1, 2, 1, 4, 2, 3, 4, 5, 5
        cin >> ele;
        arr.push_back(ele);
    }
    uniqueNumber(arr);
    return 0;
}
