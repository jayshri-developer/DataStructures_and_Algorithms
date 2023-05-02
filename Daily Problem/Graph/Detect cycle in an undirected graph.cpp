// link:- https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
// tc:- o(n + 2e)
// sc:- o(n )

// approach 1  dfs used
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

// approach 2

class Solution {
  public:
  bool bfs(int vis[], vector<int> adj[], int start)
  {
     vis[start] = 1;
     queue<pair<int, int>> q;
     q.push({start, -1});
     
     while(!q.empty())
     {
         int node = q.front().first;
         int parent = q.front().second;
         q.pop();
         
         for(auto x: adj[node])
         {
             if(!vis[x])
             {
                 vis[x] = 1;
                 q.push({ x, node});
             }
             else if(parent != x)
             {
                 return true;
             }
         }
     }
     return false;
  }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0};
        
        for(int i = 0; i < V; i++)
        {
            if(!vis[i])
            {
                if(bfs(vis, adj, i))
                {
                    return true;
                }
            }
        }
        
        return false;
    }
};
