/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/next-greater-element-i/ */

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreaterMap;
        stack<int> stack;
        
        for (int i = nums2.size() - 1; i >= 0; --i) {
            while (!stack.empty() && stack.top() <= nums2[i]) {
                stack.pop();
            }
            nextGreaterMap[nums2[i]] = stack.empty() ? -1 : stack.top();
            stack.push(nums2[i]);
        }
    
        std::vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreaterMap[num]);
        }
        
        return result;
    }
};