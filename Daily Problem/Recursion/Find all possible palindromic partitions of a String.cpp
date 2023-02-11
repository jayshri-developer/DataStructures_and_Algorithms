// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/find-all-possible-palindromic-partitions-of-a-string/1
// TC: O(N * 2^N)

class Solution {
  public:
    bool check_palindrome(int i, int j, string s)
    {
        while( i <= j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
            
            i++;
            j--;
        }
        return true;
    }
    
    void helper(string s, int i, vector<string> &ans, vector<vector<string>> &fans)
    {
        if(i == s.size())
        {
            fans.push_back(ans);
            return;
        }
        
        for(int j = i; j<s.size(); j++)
        {
            if(check_palindrome(i, j, s))
            {
                ans.push_back(s.substr(i, j-i+1));
                helper(s, j+1, ans, fans);
                ans.pop_back();
            }
        }
        
    }
    
    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        vector<vector<string>> fans;
        vector<string> ans;
        helper(S, 0, ans, fans);
        return fans;
    }
};
