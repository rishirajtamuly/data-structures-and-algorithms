// Count the number of elements strictly greater than x.

#include<iostream>
#include<vector>
using namespace std;

int countElements(vector<int>& myVec, int num) {
    int size = myVec.size();
    int i = 0, count = 0;
    while(i < size) {
        if(myVec[i] > num) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter " << n << " values" << endl;
    int ele;
    for(int i = 0; i < n; i++) {
        cin >> ele;
        arr.push_back(ele);
    }
    cout << "Number of elements strictly greater than " << x << " is " << countElements(arr, x);
    return 0;
}
