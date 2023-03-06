// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/m-coloring-problem-1587115620/1
// TC: O(MN)

class Solution{
public:

    bool issafe(int i, int j, bool graph[101][101], int n, vector<int> color)
    {
        for(int k =0; k <n; k++)
        {
            if(graph[i][k] == 1 && color[k] == j)
            {
                return false;
            }
        }
        return true;
    }
    
    bool helper(bool graph[101][101], int m, int n, int i, vector<int> color)
    {
        if(i == n)
        {
            return true;
        }
        
        for(int j = 0; j<m; j++)
        {
            if(issafe(i, j, graph, n, color))
            {
                color[i] = j;
                
                if(helper(graph, m, n, i+1, color))
                {
                    return true;
                }
                
                color[i] = -1;
            }
        }
        return false;
    }
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        vector<int> color(n, -1);
        return helper(graph, m, n, 0, color);
    }
};
