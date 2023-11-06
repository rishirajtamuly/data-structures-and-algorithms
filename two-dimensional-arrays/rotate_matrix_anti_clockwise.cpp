/*
Write a program to rotate the matrix by 90 degrees anti-clockwise.

Input 1:
1 2 3
4 5 6
7 8 9

Output 1:
3 6 9
2 5 8
1 4 7
*/

#include<iostream>
#include<vector>
using namespace std;

void displayMatrix(vector<vector<int>>& matrix) {
    cout << "\nAfter rotating the matrix by 90 degrees anti-clockwise : " << endl;
    int n = matrix.size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void reverseMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // reverse row wise
    for(int k = 0; k < n; k++) {
        int i = 0;
        int j = n - 1;
        while(i < j) {
            int temp = matrix[k][i];
            matrix[k][i] = matrix[k][j];
            matrix[k][j] = temp;
            i++;
            j--;
        }
    }
}

void transposeMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of rows/columns : ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter " << n * n << " elements" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    reverseMatrix(matrix);
    transposeMatrix(matrix);
    reverseMatrix(matrix);
    reverseMatrix(matrix);
    displayMatrix(matrix);

    return 0;
}
