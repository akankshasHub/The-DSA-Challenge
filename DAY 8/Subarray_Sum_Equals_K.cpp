/* LeetCode
Link to problem description - https://leetcode.com/problems/subarray-sum-equals-k/description/ */

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int, int> prefixSumCount;
       int sum = 0;
       int count = 0;
       prefixSumCount[0] = 1;
       for (int num : nums) {
        sum += num;
        if (prefixSumCount.find(sum - k) != prefixSumCount.end()) {
            count += prefixSumCount[sum - k];
        }
        prefixSumCount[sum]++;
    }
       return count;
    }
};