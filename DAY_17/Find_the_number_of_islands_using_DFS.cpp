/* GeeksforGeeks Problem
Link to problem  description - https://www.geeksforgeeks.org/find-the-number-of-islands-using-dfs/ */

class Solution {
  public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int n = grid.size();
        int m = grid[0].size();
        int directions[8][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1},
                                {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
        

        grid[i][j] = '0'; 
        for (int d = 0; d < 8; ++d) {
            int ni = i + directions[d][0];
            int nj = j + directions[d][1];
            if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == '1') {
                dfs(grid, ni, nj);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();
        
        int numIslands = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '1') {
                    numIslands++;
                    dfs(grid, i, j);
                }
            }
        }
        
        return numIslands;
    }
};