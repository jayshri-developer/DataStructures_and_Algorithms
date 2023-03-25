// Approach 1 (use one recursion call)
//GFG link: https://practice.geeksforgeeks.org/problems/print-pattern3549/1
// TC: O(N)

class Solution{
public:

    void helper(int n, vector<int> &ans)
    {
        if(n <= 0)
        {
            ans.push_back(n);
            return;
        }
        ans.push_back(n);
        helper(n-5, ans);
        ans.push_back(n);
    }
    
    vector<int> pattern(int N){
        // code here
        vector<int> ans;
        helper(N, ans);
        return ans;
    }
};

// Approach 2 (using flag)
// TC: O(N)

// User function Template for C++

class Solution{
public:

    void helper(int n, int curr, vector<int> &ans, bool flag)
    {
        ans.push_back(curr);
        
       if(flag)
       {
           if(curr == n)
           {
               return;
           }
           helper(n, curr+5, ans, true);
       }
       else
       {
          if(curr-5 > 0)
          {
              helper(n, curr-5, ans, false);
          }
          else
          {
              helper(n, curr-5, ans, true);
          }
       }
    }
    
    vector<int> pattern(int N){
        // code here
        vector<int> ans;
        helper(N, N, ans, false);
        return ans;
    }
};
