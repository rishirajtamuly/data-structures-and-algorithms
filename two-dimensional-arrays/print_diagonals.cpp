/*
Write a program to print the elements of both the diagonals in a square matrix.

Input 1:
1 2 3
4 5 6
7 8 9

Output 1:
1 3
 5
7 9
*/

#include<iostream>
#include<vector>
using namespace std;

void printDiagonals(vector<vector<int>>& res, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j || i + j == n - 1) {
                cout << res[i][j] << " ";
            } else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows/columns : ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter " << n * n << " elements in matrix" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    printDiagonals(matrix, n);
    return 0;
}
