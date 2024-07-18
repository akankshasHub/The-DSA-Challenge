/* LeetCode Problem
Link to problrm description - https://leetcode.com/problems/move-zeroes/description/ */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),temp;
    for(int i=0,j=1;i<n,j<n;i++,j++)
    {
        if(nums[i]==0&&nums[j]!=0)
        {
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        else if(nums[i]==0&&nums[j]==0)
        {
            i=i-1;
        }
    }
    }
};