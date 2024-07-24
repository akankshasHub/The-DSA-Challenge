/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/reverse-words-in-a-string/description/ */

class Solution {
public:
    string reverseWords(string s) {
        string word;
        vector<string> words;
        int n=s.size(),i;
        for(i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                word.push_back(s[i]);
                if(i==n-1)
                {
                    words.push_back(word);
                    word.clear();
                }
            }
            else if(s[i]==' ' && !word.empty())
            {
                words.push_back(word);
                //words.push_back(" ");
                word.clear();
            }
        }
        reverse(words.begin(),words.end());
        s.clear();
        ostringstream oss;
    for (size_t i = 0; i < words.size(); ++i) {
        oss << words[i];
        if (i != words.size() - 1) {
            oss << ' ';
        }
    }
    
    return oss.str();
    }
};    