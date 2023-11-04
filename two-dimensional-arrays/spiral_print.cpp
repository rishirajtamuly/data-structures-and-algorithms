// WAP to print the matrix in spiral form. [Leetcode 54]

#include<iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter rows of matrix : ";
    cin >> m;
    int n;
    cout << "Enter cols of matrix : ";
    cin >> n;
    int arr[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // spiral
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;
    while(minr <= maxr && minc <= maxc) {
        // right
        for(int j = minc; j <= maxc; j++) {
            cout << arr[minr][j] << " ";
        }
        minr++;
        if(minr > maxr || minc > maxc) break;
        // down
        for(int i = minr; i <= maxr; i++) {
            cout << arr[i][maxc] << " ";
        }
        maxc--;
        if(minr > maxr || minc > maxc) break;
        // left
        for(int j = maxc; j >= minc; j--) {
            cout << arr[maxr][j] << " ";
        }
        maxr--;
        if(minr > maxr || minc > maxc) break;
        // top
        for(int i = maxr; i >= minr; i--) {
            cout << arr[i][minc] << " ";
        }
        minc++;

    }
    return 0;
}

/*

#include<iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter rows of matrix : ";
    cin >> m;
    int n;
    cout << "Enter cols of matrix : ";
    cin >> n;
    int arr[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // spiral
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;
    int tne = n * m;
    int count = 0;
    while(minr <= maxr && minc <= maxc) {
        // right
        for(int j = minc; j <= maxc && count < tne; j++) {
            cout << arr[minr][j] << " ";
            count++;
        }
        minr++;

        // down
        for(int i = minr; i <= maxr && count < tne; i++) {
            cout << arr[i][maxc] << " ";
            count++;
        }
        maxc--;

        // left
        for(int j = maxc; j >= minc && count < tne; j--) {
            cout << arr[maxr][j] << " ";
            count++;
        }
        maxr--;

        // top
        for(int i = maxr; i >= minr && count < tne; i--) {
            cout << arr[i][minc] << " ";
            count++;
        }
        minc++;

    }
    return 0;
}

*/
