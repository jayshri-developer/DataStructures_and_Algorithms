// link:- https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
// tc:-  O((3N^2))
// sc:- 

// approch 1
class Solution{
    public:
    
    void helper(vector<vector<int>> m, int n, int row, int col, string str, vector<string> &res, vector<vector<bool>> vis)
    {
        if(m[row][col] == 0 || vis[row][col])
        {
            return;
        }
        
        if(row == n-1 && col == n-1)
        {
           res.push_back(str);
           return;
        }
        
        vis[row][col] = true;
        
        if(col < n-1)
        {
            helper(m, n, row, col+1, str+'R', res, vis);
        }
        if(row < n-1)
        {
            helper(m, n, row+1, col, str+'D', res, vis);
        }
        if(col > 0)
        {
            helper(m, n, row, col-1, str+'L', res, vis);
        }
        if(row > 0)
        {
            helper(m, n, row-1, col, str+'U', res, vis);
        }
        vis[row][col] = false;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<string> res;
        vector<vector<bool>> vis(n, vector<bool> (n, false));
        
        helper(m, n, 0, 0, "", res, vis);
        
        return res;
    }
};

// approch 2
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
