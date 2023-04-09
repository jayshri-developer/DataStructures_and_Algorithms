// link:- https://practice.geeksforgeeks.org/problems/array-to-bst4443/1
// tc:- o(n)
// sc:- o(n)

// approach 1
class Solution {
public:
    void helper(vector<int> nums, int start, int end, vector<int> &ans)
    {
        if(start > end)
        {
            return;
        }
        int mid = start + (end-start)/2;
        ans.push_back(nums[mid]);
        helper(nums, start, mid-1, ans);
        helper(nums, mid+1, end, ans);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> ans;
        helper(nums, 0, nums.size()-1, ans);
        return ans;
    }
};
