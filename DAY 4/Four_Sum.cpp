/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/4sum/description/ */

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        set<vector<int>> store;
        int n=nums.size();
        long int sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int k=j+1;
                int l=n-1;
                while(k<l){
                    sum=(long)nums[i]+(long)nums[j]+(long)nums[k]+(long)nums[l];
                    if(sum==target)
                    {

                        store.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    } else if(sum<target)
                    {
                        k++;
                    } else
                    {
                        l--;
                    }
                }
            }
        }
        for(auto quadrapl : store)
            result.push_back(quadrapl);
        return result;
    }
};