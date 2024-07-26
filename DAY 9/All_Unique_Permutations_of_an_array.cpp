/* GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/0 */

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ar;
        ar.push_back(arr);
        while(next_permutation(arr.begin(), arr.end()))
        {
            ar.push_back(arr);
        }
        return ar;
    }
}