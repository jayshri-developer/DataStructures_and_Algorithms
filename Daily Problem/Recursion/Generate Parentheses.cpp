// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1
// TC: O(2^N * N)

class Solution
{
    private: 
    
    void helper(int open, int close, string op, vector<string> &ans)
    {
       if(open == 0 && close == 0)
       {
           ans.push_back(op);
           return ;
       }
       
       if(open)
       {
           string op1 = op;
           op1.push_back('(');
           helper(open-1, close, op1, ans);
       }
       if(close > open)
       {
           string op2 = op;
           op2.push_back(')');
           helper(open, close-1, op2, ans);
       }
    }
    
    public:
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        int open = n;
        int close = n;
        string op = "";
        helper(open, close, op, ans);
        return ans;
    }
};
