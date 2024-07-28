/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/gas-station/description/ */

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s1 = gas.size();
        int tank = 0;
        int final = 0;
        int start = 0;
        for(int i=0;i<s1;i++)
        {
            final += gas[i] - cost[i];
            tank += gas[i] - cost[i];
            if(tank < 0)
            {
                tank = 0;
                start = i + 1;
            }
        }
        return (final < 0) ? -1 : start;
    }
};