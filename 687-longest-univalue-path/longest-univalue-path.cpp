/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode* root, int &maxi)
    {
        if(root == NULL)
        {
            return 0;
        }

        int left = helper(root->left, maxi);
        int right = helper(root->right, maxi);

        if(root->left == NULL || root->left->val != root->val)
        {
            left = 0;
        }
        if(root->right == NULL || root->right->val != root->val)
        {
            right = 0;
        }

        maxi = max(maxi, left+right);

        return max(left, right)+1;
    }
    int longestUnivaluePath(TreeNode* root) {
        
        int maxi = 0;
        helper(root, maxi);
        return maxi;
    }
};