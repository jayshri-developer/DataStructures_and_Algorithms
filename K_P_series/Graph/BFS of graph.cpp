//GFG link: https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
// TC: O(E + V)
// sc:- 0(v)
// Approach 1

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<bool> vis(V, false);
        
        queue<int> q;
        q.push(0);
        vis[0] = true;
        
        while(!q.empty())
        {
            int f = q.front();
            q.pop();
            
            ans.push_back(f);
            
            for(int x : adj[f])
            {
                if(!vis[x])
                {
                    q.push(x);
                    vis[x] = true;
                }
            }
        }
        return ans;
    }
};
