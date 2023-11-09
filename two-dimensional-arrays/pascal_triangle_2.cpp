/*
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it:


Example 1:

Input: rowIndex = 3
Output: [1,3,3,1]


Example 2:

Input: rowIndex = 0
Output: [1]


Example 3:

Input: rowIndex = 1
Output: [1,1]


Constraints:

0 <= rowIndex <= 33


Follow up: Could you optimize your algorithm to use only O(rowIndex) extra space?
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<vector<int>> vec;
    for(int i = 0; i <= rowIndex; i++) {
        vector<int> a(i + 1);
        vec.push_back(a);
        for(int j = 0; j <= i; j++) {
            if(j == 0 || i == j) {
                vec[i][j] = 1;
            } else {
                vec[i][j] = vec[i - 1][j] + vec[i - 1][j - 1];
            }
         }
    }
    return vec[rowIndex];
}

int main() {
    int rowIndex;
    cout << "Enter number of rows : ";
    cin >> rowIndex;
    vector<int> v = getRow(rowIndex);
    // print
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
