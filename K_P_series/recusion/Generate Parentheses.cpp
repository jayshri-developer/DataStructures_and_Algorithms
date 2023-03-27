// link:-
// tc:- o(2^n * n)

class Solution
{
    public:
    
    void helper(int n, string curr, int openpara, int closepara, vector<string> &ans)
    {
        if(openpara == n && closepara == n)
        {
            ans.push_back(curr);
            return;
        }
        // open para
        if(openpara < n)
        {
           helper(n, curr+ '(', openpara+1, closepara, ans); 
        }
        
        // close
        if(openpara > closepara)
        {
            helper(n, curr+')', openpara, closepara+1, ans);
        }
        
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        helper(n, "", 0, 0, ans);
        return ans;
    }
};
