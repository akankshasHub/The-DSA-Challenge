/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/container-with-most-water/description/ */

class Solution {
public:
    int maxArea(vector<int>& height) {
        int j = height.size() - 1,k=0;
        int mul, max = 0;
        for (int i = 0; i < height.size(); i++) {
            if (height[k] < height[j]) {
                mul = (j - k) * height[k];
                k++;
            } else {
                mul = (j - k) * height[j];
                j--;
            
            }
            if (max < mul) {
                max = mul;
            }
        }
        return max;
    }
};
