/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/task-scheduler/ */

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> taskCount;
        
        // Count occurrences of each task
        for (char task : tasks) {
            taskCount[task]++;
        }
        
        // Sort tasks based on frequency
        vector<int> frequencies;
        for (auto it : taskCount) {
            frequencies.push_back(it.second);
        }
        sort(frequencies.begin(), frequencies.end(), greater<int>());
        
        // Determine number of idle slots required
        int maxFreq = frequencies[0];
        int idleTime = (maxFreq - 1) * n;
        
        // Distribute remaining tasks into idle slots
        for (int i = 1; i < frequencies.size(); ++i) {
            idleTime -= min(frequencies[i], maxFreq - 1);
        }
        
        idleTime = max(0, idleTime); // idleTime should not be negative
        
        // Total intervals required
        return tasks.size() + idleTime;
    }
};