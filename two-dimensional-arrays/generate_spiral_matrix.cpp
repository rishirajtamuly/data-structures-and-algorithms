/*
Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.

Input 1: n = 3
Output 1: [[1,2,3],[8,9,4],[7,6,5]]

Input 2: n = 1
Output 2: [[1]]
*/


#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>>& arr, int n) {
    cout << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows/columns : ";
    cin >> n;
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int k = 1;
    vector<vector<int>> arr(n, vector<int>(n));

    while(minr <= maxr && minc <= maxc) {
        // L -> R
        for(int i = minc; i <= maxc; i++) {
            arr[minr][i] = k;
            k++;
        }
        minr++;
        if(minr > maxr || minc > maxc) break;

        // T -> B
        for(int j = minr; j <= maxr; j++) {
            arr[j][maxc] = k;
            k++;
        }
        maxc--;
        if(minr > maxr || minc > maxc) break;

        // R -> L
        for(int i = maxc; i >= minc; i--) {
            arr[maxr][i] = k;
            k++;
        }
        maxr--;

        // B -> T
        for(int j = maxr; j >= minr; j--) {
            arr[j][minc] = k;
            k++;
        }
        minc++;
    }
    display(arr, n);
    return 0;
}
