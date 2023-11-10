/* Score after flipping matrix. [Leetcode 861]

You are given an m x n binary matrix grid.

A move consists of choosing any row or column and toggling each value in that row or column
(i.e., changing all 0's to 1's, and all 1's to 0's).

Every row of the matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.

Return the highest possible score after making any number of moves (including zero moves).

Example 1:

Input: grid = [[0,0,1,1],[1,0,1,0],[1,1,0,0]]
Output: 39
Explanation: 0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39


Example 2:

Input: grid = [[0]]
Output: 1


Constraints:

m == grid.length
n == grid[i].length
1 <= m, n <= 20
grid[i][j] is either 0 or 1.
*/

#include<iostream>
#include<vector>
using namespace std;

int matrixScore(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    // making the first column all 1's
    for(int i = 0; i < rows; i++) {
        if(grid[i][0] == 0) {   // flip
            for(int j = 0; j < cols; j++) {
                if(grid[i][j] == 0) {
                    grid[i][j] = 1;
                } else {
                    grid[i][j] = 0;
                }

            }
        }
    }
    // flip the columns where number of zeroe's greater than number of one's
    for(int j = 0; j < cols; j++) {
        int noz = 0;
        int noo = 0;
        for(int i = 0; i < rows; i++) {
            if(grid[i][j] == 0) noz++;
            else noo++;
        }
        if(noz > noo) {
            for(int i = 0; i < rows; i++) {
                if(grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < rows; i++) {
        int x = 1;
        for(int j = cols - 1; j >= 0; j--) {
            sum += grid[i][j] * x;
            x *= 2;
        }
    }
    return sum;
}

int main() {
    int m, n;
    cout << "Enter number of rows : ";
    cin  >> m;
    cout << "Enter number of columns : ";
    cin  >> n;
    vector<vector<int>> grid(m, vector<int> (n));
    cout << "Enter " << m * n << " elements in matrix" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    int sum = matrixScore(grid);
    cout << "Score after flipping matrix : " << sum << endl;
    return 0;
}

