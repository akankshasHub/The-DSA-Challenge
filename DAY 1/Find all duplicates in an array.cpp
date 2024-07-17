class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      int n=nums.size();
      vector<int> a;
      int i,j;
      sort(nums.begin(),nums.end());
      for(i=0,j=i+1;j<n;i++,j++)
      {
        if(nums[i]==nums[j])
        a.push_back(nums[i]);
      }  
      return a;
    }
};