/*

Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).

Input 1:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 2 , l2 = 3 , r2 = 3

Output 1: -4


Input 2:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 0 , l2 = 0 , r2 = 3

Output 1: 2

*/

#include<iostream>
#include<vector>
using namespace std;

int sumOfRectangle(vector<vector<int>>& rectangle, int l1, int r1, int l2, int r2) {
    int sum = 0;
    for(int i = r1; i <= r2; i++) {
        for(int j = l1; j <= l2; j++) {
            sum += rectangle[i][j];
        }
    }
    return sum;
}

int main() {
    int m;
    cout << "Enter number of rows : ";
    cin >> m;
    int n;
    cout << "Enter number of columns : ";
    cin >> n;

    vector<vector<int>> A(m, vector<int>(n));
    cout << "Enter " << m * n << " matrix elements : " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    int l1 , l2 , r1 , r2;
    cout << "Enter the 1st coordinate : " << endl;
    cin >> r1 >> l1;
    cout << "Enter the 2nd coordinate : " << endl;
    cin >> r2 >> l2;
    cout << "Sum = " << sumOfRectangle(A, l1, r1, l2, r2) << endl;
    return 0;
}
