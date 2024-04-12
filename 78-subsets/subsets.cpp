class Solution {
public:
void helper(vector<int> &nums, vector<int> &ans, vector<vector<int>> &final, int index)
{
    if(index == nums.size())
    {
        final.push_back(ans);
        return;
    }

    ans.push_back(nums[index]);
    helper(nums, ans, final, index+1);
    ans.pop_back();
    helper(nums, ans, final, index+1);
}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans; 
        vector<vector<int>> final;

        helper(nums, ans, final, 0);
        // sort(final.begin(), final.end());
        return final;
    }
};