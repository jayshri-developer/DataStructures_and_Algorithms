// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/subsets-1613027340/1
// TC: O(2^N)

class Solution
{
    public:
    
    void helper(vector<int> &a, int i, vector<int> &ans, vector<vector<int>> &fans)
    {
        if(i == a.size()) {
            fans.push_back(ans);
            return; 
        }
        
        helper(a, i+1, ans, fans);
        ans.push_back(a[i]);
        helper(a, i+1, ans, fans);
        ans.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>> fans;
        vector<int> ans;
        helper(A, 0, ans, fans);
        sort(fans.begin(), fans.end());
        return fans;
    }
};
