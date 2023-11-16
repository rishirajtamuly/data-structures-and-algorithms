/*
Given n strings consisting of digits from
0 to 9. Return the index of string which has
maximum value. (Take 0 based indexing)

Input : 0123, 0023, 456, 00182, 940, 2901
Output: 5
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<string> vec = {"0123", "0023", "456", "00182", "940", "2901"};
    int max = INT_MIN;
    int idx = 0;
    for(int i = 0; i < vec.size(); i++) {
        if(max < stoi(vec[i])) {
            max = stoi(vec[i]);
            idx = i;
        }
    }
    cout << "Index " << idx << " has maximum value" << endl;

    return 0;

}
