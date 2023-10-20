// Move all zeros to the end of the array. [relative ordering must not be disturbed]

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

void shiftZeroes(vector<int>& arr) {
    int n = arr.size();
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

/*
void shiftZeroes(vector<int>& arr, int n) {
    int i = 0;
    int j = n - 1;
    while(i < j) {
        if(arr[i] != 0) {
            i++;
        }
        if(arr[i] == 0 && arr[j] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        if(arr[j] == 0) {
            j--;
        }
    }
}
*/

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " values" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    shiftZeroes(arr);
    display(arr);
    return 0;
}
