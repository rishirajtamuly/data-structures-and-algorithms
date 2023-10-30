// Write a program to print the row number having the maximum sum in a given matrix

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void maximumSumRow(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    int maxSum = INT_MIN;
    int maxRow = -1;
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum += mat[i][j];
        }
        if(maxSum < sum) {
            maxSum = sum;
            maxRow = i;
        }
    }
    cout << "Row number " << maxRow << " has the maximum sum " << maxSum << endl;
}

int main() {
    int m, n;
    cout << "Enter number of rows : ";
    cin >> m;
    cout << "Enter number of columns : ";
    cin >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    cout << "Enter " << m * n << " elements in the matrix" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    maximumSumRow(mat);
    return 0;
}
