/* GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1 */

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> bfsTraversal;  
        vector<bool> visited(V, false);
        queue<int> q;  
        q.push(0);
        visited[0] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfsTraversal.push_back(node);
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }

        return bfsTraversal;
    }
};