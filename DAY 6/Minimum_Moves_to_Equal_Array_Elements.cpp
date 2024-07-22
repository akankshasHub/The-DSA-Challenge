/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/ */

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int sum1=0,sum2=0,result;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            sum1=sum1+nums[i];
            i++;
            sum2=sum2+nums[j];
            j--;
        }
        result=sum2-sum1;
        return result;
    }
};