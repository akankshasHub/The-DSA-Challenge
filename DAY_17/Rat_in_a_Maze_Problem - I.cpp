/* GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1 */


class Solution {
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string> result;
        int n = mat.size();
        if (n == 0 || mat[0][0] == 0 || mat[n-1][n-1] == 0) {
            return result; 
        }
        string path;
        dfs(mat, 0, 0, path, result);
        
        sort(result.begin(), result.end()); 
        return result;
    }
    
private:
    void dfs(vector<vector<int>>& mat, int i, int j, string& path, vector<string>& result) {
        int n = mat.size();
        if (i == n-1 && j == n-1) {
            result.push_back(path);
            return;
        }
        mat[i][j] = 0;
        if (i + 1 < n && mat[i + 1][j] == 1) {
            path.push_back('D');
            dfs(mat, i + 1, j, path, result);
            path.pop_back();
        }
        
        if (i - 1 >= 0 && mat[i - 1][j] == 1) {
            path.push_back('U');
            dfs(mat, i - 1, j, path, result);
            path.pop_back();
        }
        
        if (j + 1 < n && mat[i][j + 1] == 1) {
            path.push_back('R');
            dfs(mat, i, j + 1, path, result);
            path.pop_back();
        }
        
        if (j - 1 >= 0 && mat[i][j - 1] == 1) {
            path.push_back('L');
            dfs(mat, i, j - 1, path, result);
            path.pop_back();
        }
        
      
        mat[i][j] = 1;
    }
};