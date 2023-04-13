//GFG link: https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1
// TC: O(E + V)

// Approach 1

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        // Code here
        vector<vector<int>> res(V, vector<int> ());
        
        for(int i = 0; i <V; i++)
        {
            res[i].push_back(i);
            
            for(auto m : adj[i])
            {
                res[i].push_back(m);
            }
        }
        return res;
    }
};
