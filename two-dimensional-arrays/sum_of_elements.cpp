/* Write a program to print sum of all the
elements of a 2D matrix. */

#include<iostream>
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
    int sum = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
    }
    cout << "Sum of all the elements is " << sum << endl;
    return 0;
}
