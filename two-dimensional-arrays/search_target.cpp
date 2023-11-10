/*

Write an efficient algorithm that searches for a
value target in an m x n integer matrix which has the
following properties :
● Integers in each row are sorted in ascending from left to
right.
● Integers in each column are sorted in ascending from top to
bottom. [Leetcode 240]

Input:
matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true

Input:
matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
Output: false

Constraints:

m == matrix.length
n == matrix[i].length
1 <= n, m <= 300
-109 <= matrix[i][j] <= 109
All the integers in each row are sorted in ascending order.
All the integers in each column are sorted in ascending order.
-109 <= target <= 109

*/


#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int i = 0;
        int j = cols - 1;
        while(i < rows && j >= 0) {
            if(matrix[i][j] == target) return matrix[i][j];
            else if(matrix[i][j] > target) j--;
            else i++;
        }
        return false;
}

int main() {
    vector<vector<int>> matrix(5, vector<int> (5));
    matrix = {{1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22}, {10,13,14,17,24}, {18,21,23,26,30}};
    int target;
    cout << "Enter target : ";
    cin >> target;
    bool isPresent = searchMatrix(matrix, target);
    cout << isPresent << endl;
    return 0;
}
