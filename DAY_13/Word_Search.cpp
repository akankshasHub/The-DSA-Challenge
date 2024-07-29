/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/word-search/description/ */

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (dfs(board, word, 0, i, j)) {
                    return true;
                }
            }
        }
        return false;
    }

private:
    bool dfs(std::vector<std::vector<char>>& board, const std::string& word, int index, int x, int y) {
        if (index == word.size()) return true; 
        if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || board[x][y] != word[index]) {
            return false;
        }

        char temp = board[x][y];
        board[x][y] = '#'; // Mark as visited

        
        bool found = dfs(board, word, index + 1, x + 1, y) ||
                     dfs(board, word, index + 1, x - 1, y) ||
                     dfs(board, word, index + 1, x, y + 1) ||
                     dfs(board, word, index + 1, x, y - 1);

        board[x][y] = temp; 
        return found;
    }
};

