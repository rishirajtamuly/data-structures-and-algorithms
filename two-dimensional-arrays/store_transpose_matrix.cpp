/* Write a program to print the transpose of
the matrix entered by the user and store it in a new
matrix. */

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> transposeMatrix(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> trans(rows, vector<int>(cols));
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            trans[i][j] = matrix[j][i];
        }
    }
    return trans;
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

    vector<vector<int>> trans = transposeMatrix(matrix);
    cout << "\nAfter transposing : " << endl;
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
