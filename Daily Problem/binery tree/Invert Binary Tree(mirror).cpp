// Approach 1 (recursion)
//GFG link: 
// TC: O(Num of node)

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if(root)
        {
            invertTree(root->left);
            invertTree(root->right);

            swap(root->left, root->right);
        }
        return root;
    }
};

=======================================================
// Approach 2

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if(!root)
        {
            return 0;
        }

        TreeNode * node = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(node);

        return root;
    }
};
