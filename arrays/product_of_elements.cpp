// Calculate the product of all the elements in the given array.

#include<iostream>
#include<vector>
using namespace std;

int product(vector<int>& myVector) {
    int product = 1;
    int size = myVector.size();
    for(int i = 0; i < size; i++) {
        product = product * myVector[i];
    }
    return product;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter " << n << " values: ";
    int e;
    for(int i = 0; i < n; i++) {
        cin >> e;
        arr.push_back(e);
    }
    cout << "Product of all the elements in the array is " << product(arr) << endl;
    return 0;
}
