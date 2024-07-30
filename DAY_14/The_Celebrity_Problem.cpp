/* GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/the-celebrity-problem/1 */


class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) {
        // code here
        int a = 0, b = n - 1;
    while (a < b) {
        if (M[a][b] == 1) {
            a++;
        } else {
            b--;
        }
    }
    int candidate = a;
    for (int i = 0; i < n; ++i) {
        if (i != candidate && (M[candidate][i] == 1 || M[i][candidate] == 0)) {
            return -1;
        }
    }

    return candidate;
    }
};