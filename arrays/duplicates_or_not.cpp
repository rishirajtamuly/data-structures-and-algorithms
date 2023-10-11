// Given an array, predict if the array contains duplicates or not

#include<iostream>
#include<vector>
using namespace std;

void isDuplicate(vector<int>& myVec) {
    bool flag = false;
    for(int i = 0; i < myVec.size() - 1; i++) {
        for(int j = i + 1; j < myVec.size(); j++) {
            if(myVec[i] == myVec[j]) {
                flag = true;
                break;
            }
        }
    }
    if(flag) {
        cout << "Duplicates" << endl;
    } else {
        cout << "No Duplicates" << endl;
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> vec;
    cout << "Enter " << n << " values";
    int ele;
    for(int i = 0; i < n; i++) {
        cin >> ele;
        vec.push_back(ele);
    }
    isDuplicate(vec);
    return 0;
}
