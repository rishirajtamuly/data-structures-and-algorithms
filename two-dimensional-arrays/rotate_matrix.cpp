// Write a program to rotate the matrix(n x n) by 90 degrees clockwise.  [Leetcode 48] 


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

void rotateMatrix(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // transpose matrix
    for(int i = 0; i < rows; i++) {
        for(int j = i + 1; j < cols; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // reverse row wise
    for(int k = 0; k < rows; k++) {
        int i = 0;
        int j = cols - 1;
        while(i < j) {
            int temp = matrix[k][i];
            matrix[k][i] = matrix[k][j];
            matrix[k][j] = temp;
            i++;
            j--;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of rows and columns : ";
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    cout << "Enter " << n * n << " elements in matrix" << endl;
    // inserting elements in matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "\nBefore rotating matrix : " << endl;
    displayMatrix(mat);
    rotateMatrix(mat);
    cout << "\nAfter rotating matrix : " << endl;
    displayMatrix(mat);

    return 0;
}
