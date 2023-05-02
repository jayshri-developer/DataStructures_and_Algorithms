// link:- https://leetcode.com/problems/01-matrix/description/
// tc:- o(n^2) + 0(v+e)
// sc:- 

// approach 1  BFS

class Solution {
public:
    bool checkValid(int i, int j, int m , int n)
    {
        if(i < 0 || j < 0 || i >= m || j >= n)
        {
            return false;
        }
        return true;
    }

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> ans(mat.size(), vector<int>(mat[0].size(), -1));
        queue<pair<int, int>> q;
        int m = mat.size();
        int n = mat[0].size();

        for(int i = 0; i <m; i++)
        {
            for(int j = 0; j <n; j++)
            {
                if(mat[i][j] == 0)
                {
                    q.push({i, j});
                    ans[i][j] = 0;
                }
            }
        }

        while(!q.empty())
        {
            int i = q.front().first;
            int j = q.front().second;

            q.pop();

            if(checkValid(i+1, j, m, n) && ans[i+1][j] == -1)
            {
                q.push({i+1, j});
                ans[i+1][j] = ans[i][j] +1;
            }

            if(checkValid(i-1, j, m, n) && ans[i-1][j] == -1)
            {
                q.push({i-1, j});
                ans[i-1][j] = ans[i][j] +1;
            }

            if(checkValid(i, j+1, m, n) && ans[i][j+1] == -1)
            {
                q.push({i, j+1});
                ans[i][j+1] = ans[i][j] +1;
            }

            if(checkValid(i, j-1, m, n) && ans[i][j-1] == -1)
            {
                q.push({i, j-1});
                ans[i][j-1] = ans[i][j] +1;
            }
        }
        return ans;
    }
};