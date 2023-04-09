// link:- https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
// tc:- o(n)
// sc:- o(n)

// approach 1

class Solution {
public:
    TreeNode* helper(vector<int> nums, int start, int end)
    {
        if(start > end)
        {
            return NULL;
        }
        int mid = start + (end-start)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = helper(nums, start, mid-1);
        node->right = helper(nums, mid+1, end);
        return node;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == NULL)
        {
            return NULL;
        }
        if(nums.size() == 1)
        {
            return new TreeNode(nums[0]);
        }
        TreeNode* root = helper(nums, 0, nums.size()-1);
        return root;
    }
};
