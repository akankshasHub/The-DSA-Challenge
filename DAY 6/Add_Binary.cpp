/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/add-binary/description/ */

class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int n=a.length()-1;
        int m=b.length()-1;
        int carry=0;
        while(n>=0 || m>=0 || carry)
        {
            if(n>=0)
                carry=carry+a[n--]-'0';
            if(m>=0)
                carry=carry+b[m--]-'0';
        result+=carry%2+'0';
        carry=carry/2;
        }
        reverse(begin(result),end(result));
        return result;   
    }
};