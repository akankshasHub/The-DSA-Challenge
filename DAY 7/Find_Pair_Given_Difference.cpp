/* GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1 */

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        std::unordered_set<int> seen;
    
    for (int num : arr) {
        if (seen.count(num - x) || seen.count(num + x)) {
            return 1;
        }
        seen.insert(num);
    }
    
    return -1;
    }
};