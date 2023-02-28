// Approach 1
//GFG link:  https://leetcode.com/problems/permutations-ii/description/
// TC: O(N * n!)

class Solution {
public:
    void helper(vector<int> nums, vector<vector<int>>& result, int index) {
        if (index == nums.size()) 
        {
            result.emplace_back(nums);
        }

        for (int i = index; i < nums.size(); i++) 
        {
            if (i != index && nums[i] == nums[index]) continue;
            swap(nums[i], nums[index]);
            helper(nums, result, index + 1);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        helper(nums, result, 0);
        return result;
    }
};
