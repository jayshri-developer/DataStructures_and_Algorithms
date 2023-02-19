// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/subset-sum-ii/1
// TC: O(2^N * n)


class Solution {
    void helper(int index, vector<int> nums, vector<int> ans, vector<vector<int>> &result)
    {
        result.push_back(ans);
        
        for(int i = index; i< nums.size(); i++)
        {
            if(i != index && nums[i] == nums[i-1])
            {
                continue;
            }
            
            ans.push_back(nums[i]);
            helper(i+1, nums, ans, result);
            ans.pop_back();
        }
    }
    
  public:
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        vector<vector<int>> result;
        vector<int> ans;
        sort(nums.begin(), nums.end());
        helper(0, nums, ans, result);
        return result;
    }
};
