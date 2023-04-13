//GFG link: https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
// TC: O(E + V)
// sc:- 0(v)
// Approach 1

class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool dfs(vector<bool> &vis, vector<int> adj[], int index, int parent)
    {
        vis[index] = true;
        
        for(auto x : adj[index])
        {
            if(vis[x] && x != parent)
            {
                return true;
            }
            if(!vis[x] && dfs(vis, adj, x, index))
            {
                return true;
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> vis(V, false);
        
        for(int i = 0; i < V; i++)
        {
            if(!vis[i] && dfs(vis, adj, i , -1))
            {
                return true;
            }
        }
        return false;
    }
};
