// Move all negative numbers to beginning and positive to end with constant extra space.


#include<iostream>
#include<vector>
using namespace std;

void displayElements(vector<int>& arr) {
    cout << "After sorting: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void arrargeElements(vector<int>& arr) {
    int i = 0;
    int j = arr.size() - 1;
    while(i < j) {
        if(arr[i] < 0) {
            i++;
        }
        if(arr[j] > 0) {
            j--;
        }
        if(i > j) {
            break;
        }
        if(arr[i] > 0 && arr[j] < 0) {
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
    arrargeElements(arr);
    displayElements(arr);
    return 0;
}
