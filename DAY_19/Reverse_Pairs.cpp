/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/reverse-pairs/description/ */

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergeSortAndCount(nums, 0, nums.size() - 1);
    }
    private:
    int mergeSortAndCount(vector<int>& nums, int left, int right) {
        if (left >= right) {
            return 0;
        }
        
        int mid = left + (right - left) / 2;
        int count = mergeSortAndCount(nums, left, mid) + mergeSortAndCount(nums, mid + 1, right);
        
        // Counting reverse pairs
        int j = mid + 1;
        for (int i = left; i <= mid; ++i) {
            while (j <= right && nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }
        
        // Merge the two sorted halves
        vector<int> sorted(right - left + 1);
        int p1 = left, p2 = mid + 1, p = 0;
        while (p1 <= mid && p2 <= right) {
            if (nums[p1] <= nums[p2]) {
                sorted[p++] = nums[p1++];
            } else {
                sorted[p++] = nums[p2++];
            }
        }
        while (p1 <= mid) {
            sorted[p++] = nums[p1++];
        }
        while (p2 <= right) {
            sorted[p++] = nums[p2++];
        }
        for (int k = 0; k < sorted.size(); ++k) {
            nums[left + k] = sorted[k];
        }
        
        return count;
    }
};