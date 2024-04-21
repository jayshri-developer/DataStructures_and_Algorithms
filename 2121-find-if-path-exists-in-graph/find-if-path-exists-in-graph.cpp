class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> mp;

        for(auto it : edges)
        {
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }

        vector<bool> vis(n, 0);
        queue<int> q;
        q.push(source);
        vis[source] = 1;
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            if(curr == destination)
            {
                return 1;
            }
            for(auto node : mp[curr])
            {
                if(!vis[node])
                {
                    vis[node] = 1;
                    q.push(node);
                }
            }
        }
        return false;
    }
};