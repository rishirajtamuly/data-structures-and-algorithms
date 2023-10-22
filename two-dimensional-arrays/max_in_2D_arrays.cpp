/* Write a C++ program to find the largest
element of a given 2D array of integers. */

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int m;
    cout << "Enter number of rows : ";
    cin >> m;
    int n;
    cout << "Enter number of columns : ";
    cin >> n;
    int arr[m][n];
    cout << "Enter " << m * n << " values in array" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    // max
    int maxValue = INT_MIN;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(maxValue < arr[i][j]) {
                maxValue = arr[i][j];
            }
        }
    }
    cout << "Largest element in array is " << maxValue << endl;
    return 0;
}
