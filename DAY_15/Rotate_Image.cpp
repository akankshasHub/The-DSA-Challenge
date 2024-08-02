/* LeetCode Problem 
Lin to problem description - https://leetcode.com/problems/rotate-image/ */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n = matrix.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < n; ++i) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
    void printMatrix(const vector<vector<int>>& matrix) {
        for (const auto& row : matrix) {
            for (int num : row) {
                cout << num << " ";
            }
            cout << endl;
        } 
    }
};