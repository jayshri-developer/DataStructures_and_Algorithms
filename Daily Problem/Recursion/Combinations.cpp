// Approach 1
//leetcode link: https://leetcode.com/problems/combinations/solutions/?orderBy=most_votes
// TC: O(2^N)

class Solution {
public:
    void helper(int n, int k, int index, vector<int> ans, vector<vector<int>> & result)
    {
        if( ans.size() == k)
        {
            result.push_back(ans);
            return;
        }

        for(int i = index; i < n; i++)
        {
            ans.push_back(i+1);
            helper(n, k, i+1, ans, result);
            ans.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> ans;
        helper(n, k, 0, ans, result);
        return result;
    }
};
