/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/backspace-string-compare/description/ */

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        int n=s.length();
        int m=t.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]!='#')
            {
                char ch;
                ch=s[i];
                s1.push(ch);
            }
            else if(s[i]=='#' && !s1.empty())
            {
                s1.pop();
            }
        }
        for(int j=0;j<m;j++)
        {
            if(t[j]!='#')
            {
                s2.push(t[j]);

            }
            else if(t[j]=='#' && !s2.empty())
            {
                s2.pop();
            }
        }
        while(!s1.empty() && !s2.empty())
        {
            if(s1.top()==s2.top())
            s1.pop();
            s2.pop();
        }
        return s1.empty() && s2.empty();
    }
};