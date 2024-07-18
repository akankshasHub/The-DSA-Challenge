/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/find-the-duplicate-number/description/ */
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int mid,i,j;
      sort(nums.begin(),nums.end());
      for(int i=0,j=i+1;j<nums.size();i++,j++)
      {
        if(nums[i]==nums[j])
        {
            mid=nums[i];
        }
           
      }  
      return mid;
    }
};