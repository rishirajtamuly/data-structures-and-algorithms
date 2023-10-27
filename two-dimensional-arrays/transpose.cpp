/* Write a program to print the transpose of
the matrix entered by the user.*/

#include<iostream>
#include<vector>
using namespace std;

void transposeMatrix(vector<vector<int>>& trans) {
    int rows = trans.size();
    int cols = trans[0].size();
    cout << "\nTranspose of matrix : " << endl;
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            cout << trans[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int cols;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter " << rows * cols << " elements in matrix" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nPrinting original matrix : " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    transposeMatrix(matrix);
    return 0;
}
