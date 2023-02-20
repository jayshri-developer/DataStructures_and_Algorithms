// Approach 1 [recrsion]
//GFG link: https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1
// TC: O(N)

class Solution
{
    public:
    
    void helper(int a[], int index, int n, vector<string> val, string s, vector<string> &ans)
    {
       if(index == n)
       {
           ans.push_back(s);
           return;
       }
       
       for(auto x: val[a[index]])
       {
           s.push_back(x);
           helper(a, index+1, n, val, s, ans);
           s.pop_back();
       }
    }
    
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        
        vector<string> val = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        vector<string> ans;
        
        helper(a, 0, N, val, "", ans);
        return ans;
    }
};
