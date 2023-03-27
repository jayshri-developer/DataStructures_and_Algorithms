// link:- https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1
// TC:-O(N!)
// SC:- O(n!)

class Solution{
public:

    void helper(string s, int index, string curr, vector<string> &ans)
    {
        if(index == s.size())
        {
            ans.push_back(curr);
            return;
        }
        // include space
        helper(s, index+1, curr+" "+s[index], ans);
        // exclude space
        helper(s, index+1, curr+s[index], ans);
    }
    
    vector<string> permutation(string S){
        // Code Here
        vector<string> ans;
        string curr ;
        curr += S[0];
        
        helper(S, 1, curr, ans);
        
        return ans;
    }
};
