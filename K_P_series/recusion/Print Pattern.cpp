// link:- https://practice.geeksforgeeks.org/problems/print-pattern3549/1
// TC:-O(N)
// SC:- O(n)

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
