//GFG link:https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
// TC: O(E + V)
// sc:- 0(v)
// Approach 1

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(vector<int> adj[], vector<int> &ans, vector<bool> &vis, int x)
    {
        for(auto ele : adj[x])
        {
            if(!vis[ele])
            {
                ans.push_back(ele);
                vis[ele] = true;
                dfs(adj, ans, vis, ele);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<bool> vis(V, false);
        
        ans.push_back(0);
        vis[0] = true;
        dfs(adj, ans, vis, 0);
        return ans;
    }
};
