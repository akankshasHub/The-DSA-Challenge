/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/remove-k-digits/*/

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        
        for (char digit : num) {
            while (!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }
            st.push(digit);
        }
        
        // Edge case: if k is still greater than 0, remove remaining k digits from the end
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        
        // Construct the smallest number from stack (reversed order)
        string result;
        while (!st.empty()) {
            result = st.top() + result;
            st.pop();
        }
        
        // Remove leading zeros
        int idx = 0;
        while (idx < result.length() && result[idx] == '0') {
            idx++;
        }
        
        // If result becomes empty, return "0"
        return idx < result.length() ? result.substr(idx) : "0";
    }
};