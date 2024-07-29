/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/game-of-life/ */

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        int directions[8][2] = {{-1, -1}, {-1, 0}, {-1, 1},
                                {0, -1},           {0, 1},
                                {1, -1}, {1, 0}, {1, 1}};
        for (int i = 0; i < m; ++i)
         {
            for (int j = 0; j < n; ++j)
             {
                int liveNeighbors = 0;
                for (auto& d : directions) 
                {
                    int ni = i + d[0], nj = j + d[1];
                    if (ni >= 0 && ni < m && nj >= 0 && nj < n && abs(board[ni][nj]) == 1) 
                    {
                        ++liveNeighbors;
                    }
                }
                if (board[i][j] == 1) 
                {
                  
                    if (liveNeighbors < 2 || liveNeighbors > 3)
                     {
                        board[i][j] = -1;
                    }
                } else {
                    
                    if (liveNeighbors == 3)
                     {
                        board[i][j] = 2;  
                    }
                }
            }
        }
        for (int i = 0; i < m; ++i)
         {
            for (int j = 0; j < n; ++j) 
            {
                if (board[i][j] == -1)
                 {
                    board[i][j] = 0;  
                } else if (board[i][j] == 2) 
                {
                    board[i][j] = 1;  
                }
            }
        }

    }
};