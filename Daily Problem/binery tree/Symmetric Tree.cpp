// Approach 1
//leetcode link: https://leetcode.com/problems/symmetric-tree
// TC: O(N)

class Solution {
public:
    bool helper(TreeNode* left, TreeNode* right)
    {
        if(!left && !right)
        {
            return true;
        }

        if(!left || !right)
        {
            return false;
        }

        return (left->val == right->val) && helper(left->left, right->right) && helper(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
        {
            return true;
        }

        return helper(root->left, root->right);
    }
};
