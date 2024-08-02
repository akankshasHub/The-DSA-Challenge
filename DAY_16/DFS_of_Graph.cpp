/* GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1 */

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node, vector<int> adj[], vector<bool>& visited, vector<int>& result) {
        visited[node] = true;
        result.push_back(node);
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, adj, visited, result);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<int> result;
        vector<bool> visited(V, false);
        dfs(0, adj, visited, result);
        
        return result;
    }
};