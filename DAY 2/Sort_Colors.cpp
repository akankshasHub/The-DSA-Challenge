/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/sort-colors/description/ */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,temp1;
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(nums[i]<nums[j])
                {
                    temp1=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp1;
                }
            }
        }
    }
};