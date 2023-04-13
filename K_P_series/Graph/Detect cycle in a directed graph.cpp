//GFG link: https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
// TC: O(E + V)
// sc:- 0(v)
// Approach 1

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(vector<bool> &vis, vector<bool> &currvis, vector<int> adj[], int i)
    {
        vis[i] = true;
        currvis[i] = true;
        
        for(auto x : adj[i])
        {
            if(currvis[x])
            {
                return true;
            }
            
            if(!vis[x] && dfs(vis, currvis, adj, x))
            {
                return true;
            }
        }
        currvis[i] = false;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis(V, false);
        vector<bool> currvis(V, false);
        
        for(int i = 0; i <V; i++)
        {
            if(!vis[i] && dfs(vis, currvis, adj, i))
            {
                return true;
            }
        }
        return false;
    }
};
