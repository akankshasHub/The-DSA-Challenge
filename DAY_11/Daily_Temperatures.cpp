/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/daily-temperatures/description/ */

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
         vector<int> answer(n,0);
         stack<int> temp;
         int index;
         for(int i=0;i<n;i++)
         {
             while (!temp.empty() && temperatures[i] > temperatures[temp.top()]) {
                int index = temp.top();
                temp.pop();
                answer[index] = i - index;
                }
            temp.push(i);
         }
         return answer;
    }
};