// WAP to print the matrix in wave form. (column wise printing)

#include<iostream>
#include<vector>
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
    // wave print
    int k = 0;
    for(int i = 0; i < m; i++) {
        if(k % 2 == 0) {
            for(int j = 0; j < n; j++) {
                cout << arr[j][i] << " ";
            }
        } else {  // i = 1, 3, 5
            for(int j = n - 1; j >= 0; j--) {
                cout << arr[j][i] << " ";
            }
        }
        k++;
    }
    return 0;
}



