// Find the last occurrence of x in the array

#include<iostream>
#include<vector>
using namespace std;

int lastOccurrence(vector<int>& myVector, int n) {
    int idx = -1;
    for(int i = myVector.size() - 1; i >= 0; i--) {
        if(myVector[i] == n) {
            idx = i;
            break;
        }
    }
    return idx;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    vector<int> vec;
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter " << size << " numbers" << endl;
    int num;
    for(int i = 0; i < size; i++) {
        cin >> num;
        vec.push_back(num);
    }

    cout << "Last occurrence of " << x << " in array is " << lastOccurrence(vec, x);

    return 0;
}
