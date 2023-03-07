// Approach 1
//leetcode link: https://leetcode.com/problems/binary-tree-maximum-path-sum/description/
// TC: O(N)

class Solution {
public:
    int helper(TreeNode* root, int &maxi)
    {
        if(root == NULL)
        {
            return 0;
        }

        int left = max(0, helper(root->left, maxi));
        int right = max(0, helper(root->right, maxi));

        maxi = max(maxi, left+right+root->val);
        return max(left, right) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        helper(root, maxi);
        return maxi;
    }
};
