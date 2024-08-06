/* GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/minimum-swaps/1 */

int n = nums.size();
    vector<pair<int, int>> arrPos(n);
    
    for (int i = 0; i < n; i++) {
        arrPos[i].first = nums[i];
        arrPos[i].second = i;
    }
    sort(arrPos.begin(), arrPos.end());
    vector<bool> visited(n, false);
    
    int swaps = 0;
    
    for (int i = 0; i < n; i++) 
    {
        if (visited[i] || arrPos[i].second == i)
            continue;
        
        int cycle_size = 0;
        int j = i;
        
        while (!visited[j]) {
            visited[j] = true;
            j = arrPos[j].second;
            cycle_size++;
        }
        if (cycle_size > 0) {
            swaps += (cycle_size - 1);
        }
    }
    
    return swaps;