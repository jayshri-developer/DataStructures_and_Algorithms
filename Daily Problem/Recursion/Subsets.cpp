// Approach 1
//leetcode link: https://leetcode.com/problems/subsets/
// TC: O(2^N)


class Solution {
public:

    void helper(vector<int> nums, vector<int> ans, int i, vector<vector<int>> &result)
    {
        result.push_back(ans);
        for(int j = i; j< nums.size(); j++)
        {
            ans.push_back(nums[j]);
            helper(nums, ans, j+1, result);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> result;
        helper(nums, ans, 0, result);
        return result;
    }
};
