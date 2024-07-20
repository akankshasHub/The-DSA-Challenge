/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/3sum/description/ */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> store;
        vector<vector<int>> result;
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    store.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum<0)
                {
                    j++;
                } else
                {
                    k--;
                }
            }
        }  
        for(auto triplets : store)
            result.push_back(triplets);
        return result;
    }
};