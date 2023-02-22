// Approach 1 (recursion)
//gfg link:  https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
// TC: o(4^ n*m)

class Solution{
    public:
    
    void findpathhelper(int i, int j, vector<vector<int>> m, int n, vector<string> &ans, string s, vector<vector<int>> vis)
    {
        if(i == n-1 && j == n-1)
        {
            ans.push_back(s);
            return;
        }
        
        if(i+1 < n && !vis[i+1][j] && m[i+1][j] ==1)
        {
            vis[i][j] = 1;
            findpathhelper(i+1, j, m, n, ans, s+ 'D', vis );
            vis[i][j] = 0;
        }
        
        if(j-1 >= 0 && !vis[i][j-1] && m[i][j-1] == 1)
        {
            vis[i][j] = 1;
            findpathhelper(i, j-1, m, n, ans, s+ 'L', vis);
            vis[i][j] = 0;
        }
        
        if(j+1 < n && !vis[i][j+1] && m[i][j+1] == 1)
        {
            vis[i][j] = 1;
            findpathhelper(i, j+1, m, n, ans,  s+'R', vis);
            vis[i][j] = 0;
        }
        
        if(i-1 >= 0 && !vis[i-1][j] && m[i-1][j] == 1)
        {
            vis[i][j] = 1;
            findpathhelper(i-1, j, m, n, ans, s+'U', vis);
            vis[i][j] = 0;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int> (n, 0));
        
        if(m[0][0] == 1)
        {
            findpathhelper(0, 0, m, n, ans, "", vis);
        }
        return ans;
    }
};
