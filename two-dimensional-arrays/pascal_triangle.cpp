// Given an integer 'numRows', generate Pascal's triangle. [Leetcode 118]

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int numRows = 7;
    vector<vector<int>> v;
    for(int i = 0; i < numRows; i++) {
        vector<int> a(i + 1);
        v.push_back(a);
    }
    // generate
    for(int i = 0; i < numRows; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || i == j)
                v[i][j] = 1;
            else
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
        }
    }
    // print
    for(int i = 0; i < numRows; i++) {
        for(int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
