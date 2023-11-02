// WAP to print the multiplication of two matrices given by the user.

#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>>& res) {
    int rows = res.size();
    int cols = res[0].size();
    cout << "After multiplication matrix is" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

void multiply(vector<vector<int>>& matrix1, vector<vector<int>>& matrix2) {
    int m = matrix1.size();
    int n = matrix1[0].size();
    int p = matrix2.size();
    int q = matrix2[0].size();
    vector<vector<int>> resultant(m, vector<int>(q));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            resultant[i][j] = 0;
            for(int k = 0; k < p; k++) {
                resultant[i][j] = resultant[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    display(resultant);
}

int main() {
    int m;
    cout << "Enter rows of 1st matrix : ";
    cin >> m;
    int n;
    cout << "Enter cols of 1st matrix : ";
    cin >> n;

    int p;
    cout << "Enter rows of 2nd matrix : ";
    cin >> p;
    int q;
    cout << "Enter cols of 2nd matrix : ";
    cin >> q;

    if(n == p) {
        vector<vector<int>> A(m, vector<int>(n));
        cout << "Enter "<< m * n << " elements in 1st matrix" << endl;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }

        vector<vector<int>> B(p, vector<int>(q));
        cout << "Enter "<< p * q << " elements in 2nd matrix" << endl;
        for(int i = 0; i < p; i++) {
            for(int j = 0; j < q; j++) {
                cin >> B[i][j];
            }
        }
        multiply(A, B);
    } else {
        cout << "The matrices cannot be multiplied";
    }
    return 0;
}
