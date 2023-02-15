// Approach 1 (recursion)
//GFG link: https://leetcode.com/problems/insert-into-a-binary-search-tree/description/
// TC: O(N)

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL)
        {
            TreeNode *node = new TreeNode(val);
            return node;
        }

        if(val < root->val)
        {
            root->left = insertIntoBST(root->left, val);
        }

        else if(val > root->val)
        {
            root->right = insertIntoBST(root->right, val);
        }
        else
        {
            return root;
        }
        return root;
    }
};
