/*
Write a program to print the matrix in wave form.

Input :
1 2 3
4 5 6
7 8 9

Output : 7 4 1 2 5 8 9 6 3
*/

#include<iostream>
#include<vector>
using namespace std;

void printWave(vector<vector<int>>& arr) {
    int n = arr.size();
    int m = arr[0].size();
    cout << endl;
    int k = 0;
    for(int i = 0; i < n; i++) {
        if(k % 2 == 0) {
            for(int j = n - 1; j >= 0; j--) {
                cout << arr[j][i] << " ";
            }
        } else {
            for(int j = 0; j < n; j++) {
                cout << arr[j][i] << " ";
            }
        }
        k++;
    }
}

int main() {
    int n, m;
    cout << "Enter number of rows : ";
    cin >> n;
    cout << "Enter number of columns : ";
    cin >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter " << n * m << " elements in matrix : " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    printWave(matrix);
    return 0;
}
