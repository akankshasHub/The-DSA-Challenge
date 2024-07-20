/* LeetCode 
Link to problem description - https://leetcode.com/problems/subarray-sums-divisible-by-k/description/ */

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
         unordered_map<int, int> remainder_count;
    remainder_count[0] = 1;  
    int prefix_sum = 0;
    int count = 0;

    for (int num : nums) {
        prefix_sum += num;
        int remainder = ((prefix_sum % k) + k) % k;  

        if (remainder_count.find(remainder) != remainder_count.end()) {
            count += remainder_count[remainder];
        }

        remainder_count[remainder]++;
    }

    return count;
    }
};