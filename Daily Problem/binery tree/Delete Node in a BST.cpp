// Approach 1
//GFG link: https://leetcode.com/problems/delete-node-in-a-bst/description/
// TC: O(N)


class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
        {
            return root;
        }

        if(key < root->val)
        {
            root->left = deleteNode(root->left, key);
        }
        else if(key > root-> val)
        {
            root->right = deleteNode(root->right, key);
        }
        else
        {
            if(!root->left && !root->right)
            {
                return NULL;
            }
            if(!root->left && root->right)
            {
                TreeNode * temp = root->right;
                delete(root);
                return temp;
            }
            if(root->left && !root->right)
            {
                TreeNode * temp = root->left;
                delete(root);
                return temp;
            }
            
            if (root->left && root->right) {
                TreeNode *tmp = root->right;
                while (tmp->left) {
                    tmp = tmp->left;
                }
                root->val = tmp->val;
                root->right = deleteNode(root->right, root->val);
            }
        }
        return root;
    }
};
