// link:- https://leetcode.com/problems/course-schedule/description/
// tc:- o(n+p)

// approach 1

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto it : prerequisites)
        {
            adj[it[1]].push_back(it[0]);
        }

        vector<int> indegree(numCourses, 0);
        for(int i = 0; i < numCourses; i++)
        {
            for(auto it : adj[i])
            {
                indegree[it]++;
            }
        }

        queue<int> q;
        for(int i = 0; i < numCourses; i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }

        vector<int> topo;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            topo.push_back(node);

            for(auto it : adj[node])
            {
                indegree[it]--;

                if(indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }

        if(topo.size() == numCourses)
        {
            return true;
        }
        return false;

    }
};


// approach 2

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        //code here
        vector<int> adj[n];
        for(auto it : prerequisites)
        {
            adj[it[1]].push_back(it[0]);
        }
        
        int indegree[n] = {0};
        for(int i = 0; i < n ; i++)
        {
            for(auto it : adj[i])
            {
                indegree[it]++;
            }
        }
        
        queue<int> q;
        for(int i = 0; i < n; i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }
        
        vector<int> topo;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            
            topo.push_back(node);
            
            for(auto it : adj[node])
            {
                indegree[it]--;
                
                if(indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }
        
        if(topo.size() == n)
        {
            return topo;
        }
        return {};
    }
};

