/* LeetCode Problem 
Link to problem description - https://leetcode.com/problems/majority-element/description/ */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count =0;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if (count == 0) 
            {
                temp = nums[i];
            }
            if (nums[i] == temp) 
            {
                count++;
            } else 
            {
                count--;
            }
        }
        return temp;
    }
};