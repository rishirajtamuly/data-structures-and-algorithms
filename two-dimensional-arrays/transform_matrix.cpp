// You are given a matrix/2D - Array of size(n x n). Transform(change/modify) this matrix into its transpose.

#include<iostream>
#include<vector>
using namespace std;

void displayMatrix(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transformMatrix(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    for(int i = 0; i < rows; i++) {
        for(int j = i + 1; j < cols; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of rows and columns : ";
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    cout << "Enter " << n *n << " elements in matrix" << endl;
    // inserting elements in matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    cout << "\nBefore transpose matrix : " << endl;
    displayMatrix(mat);
    transformMatrix(mat);
    cout << "\nAfter transpose matrix : " << endl;
    displayMatrix(mat);
    return 0;
}
