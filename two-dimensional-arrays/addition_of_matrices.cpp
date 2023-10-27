// Write a program to add two matrices.

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> addMatrices(vector<vector<int>>& firstMatrices, vector<vector<int>>& secondMatrices) {
    int rows = firstMatrices.size();
    int cols = firstMatrices[0].size();
    vector<vector<int>> sum(rows, vector<int>(cols));
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = firstMatrices[i][j] + secondMatrices[i][j];
        }
    }
    return sum;
}

int main() {
    int r;
    cout << "Enter number of rows: ";
    cin >> r;
    int c;
    cout << "Enter number of columns: ";
    cin >> c;

    // Taking input in first matrix
    vector<vector<int>> firstMatrix(r, vector<int>(c));
    cout << "Enter " << r * c << " elements in 1st matrix" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> firstMatrix[i][j];
        }
    }

    // Taking input in second matrix
    vector<vector<int>> secondMatrix(r, vector<int>(c));
    cout << "Enter " << r * c << " elements in 2nd matrix" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> secondMatrix[i][j];
        }
    }

    // printing first matrix
    cout << "\n1st matrix : " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << firstMatrix[i][j] << " ";
        }
        cout << endl;
    }

    // printing second matrix
    cout << "\n2nd matrix : " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << secondMatrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> resultant = addMatrices(firstMatrix, secondMatrix);
    cout << "\nAddition of 1st and 2nd matrices : " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << resultant[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
