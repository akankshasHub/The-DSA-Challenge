/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/jump-game/description/ */

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxReach=0;

          for (int i = 0; i < nums.size(); ++i) {
        if (i > maxReach) {
            return false;

        }
        maxReach = max(maxReach, i + nums[i]);  
        if (maxReach >= nums.size() - 1) {
            return true;
        }
        }
        return maxReach >= nums.size() - 1;
    }
};