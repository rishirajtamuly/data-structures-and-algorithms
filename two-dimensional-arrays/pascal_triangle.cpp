// Given an integer 'numRows', generate Pascal's triangle. [Leetcode 118]

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> pascal(int numRows) {

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
    return v;
}

int main() {
    int numRows;
    cout << "Enter number of rows : ";
    cin >> numRows;
    vector<vector<int>> v = pascal(numRows);
    // print
    for(int i = 0; i < numRows; i++) {
        for(int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

