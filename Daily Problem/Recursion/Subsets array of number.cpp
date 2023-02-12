// Approach 1 [recursion]
//GFG link: https://leetcode.com/problems/subsets/
// TC: O(N)

class Solution {
public:

    void helper(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &fans)
    {
        fans.push_back(ans);
        for(int j = i; j<nums.size(); j++)
        {
            ans.push_back(nums[j]);
            helper(nums, ans, j+1, fans);
            ans.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> fans;
        vector<int> ans;
        helper(nums, ans, 0, fans);
        return fans ;
    }
};
