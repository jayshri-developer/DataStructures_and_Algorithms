// Approach 1 [recrsion]
//GFG link: https://practice.geeksforgeeks.org/problems/combination-sum-iii/1
// TC: O(2^k)


class Solution {
    public:
    void helper(int K, int N, vector<vector<int>> &result, vector<int> ans, int num)
    {
        if(K==0)
        {
            if(N==0){
            result.push_back(ans);
            }
            return;
        }
        
        if(num>N) return;
        
        for(int i=num; i<=9; i++)
        {
            ans.push_back(i);
            helper(K-1,N-i,result,ans,i+1);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum(int K, int N) 
    {
        vector<vector<int>> result;
        vector<int> ans;
        helper(K, N, result, ans, 1);
        return result;
    }
};

