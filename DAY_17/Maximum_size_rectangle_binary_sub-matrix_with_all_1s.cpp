/* GeeksforGeeks Problem 
Link to problem description - https://www.geeksforgeeks.org/maximum-size-rectangle-binary-sub-matrix-1s/ */

class Solution{
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
    
    
    int maxArea = 0;
    vector<int> heights(m, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (M[i][j] == 0) {
                heights[j] = 0; 
            } else {
                heights[j] += 1;
            }
        }
        stack<int> stk;
        int area = 0;
        int j = 0;
        while (j < m) {
            if (stk.empty() || heights[stk.top()] <= heights[j]) {
                stk.push(j++);
            } else {
                int top = stk.top();
                stk.pop();
                int h = heights[top];
                int w = stk.empty() ? j : j - stk.top() - 1;
                area = max(area, h * w);
            }
        }
        while (!stk.empty()) {
            int top = stk.top();
            stk.pop();
            int h = heights[top];
            int w = stk.empty() ? m : m - stk.top() - 1;
            area = max(area, h * w);
        }
        maxArea = max(maxArea, area);
    }
    
    return maxArea;
    }
};