// Find the second largest element in the given Array in one pass.

#include<iostream>
#include<vector>
using namespace std;

void secondLargest(vector<int>& arr) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0; i < arr.size(); i++) {
        if(max1 < arr[i]) {
            max2 = max1;
            max1 = arr[i];
        } else if(max2 < arr[i] && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    if(max2 == INT_MIN) {
        cout<<"No second element exists"<<endl;
    } else {
        cout << "Second largest element is " << max2 << endl;
    }
}

int main() {
    vector<int> arr;
    int s;
    cout << "Enter size of array: ";
    cin >> s;
    cout << "Enter " << s << " values" << endl;
    int ele;
    for(int i = 0; i < s; i++) {
        cin >> ele;
        arr.push_back(ele);
    }
    secondLargest(arr);
    return 0;
}
