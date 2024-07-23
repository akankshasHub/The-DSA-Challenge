/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/valid-palindrome-ii/description/ */

class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return palindrome(s, i+1, j) || palindrome(s, i, j-1);
            }
                i++;
                j--;
        }
        return true;
    }
private:
    bool palindrome(string& s, int i, int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};