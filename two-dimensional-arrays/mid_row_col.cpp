/*  Write a function which accepts a 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.
[Assuming the 2D array to be a square matrix with odd dimension i.e. 3 x 3, 5 x 5, 7 x 7] */

#include<iostream>
#include<vector>
using namespace std;

void displayElements(vector<vector<int>>& arr, int n) {
    cout << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == n/2 || j == n/2) {
                cout << arr[i][j] << " ";
            } else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows and columns : ";
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    cout << "Enter " << n * n << " elements in the matrix" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    displayElements(arr, n);
    return 0;
}
