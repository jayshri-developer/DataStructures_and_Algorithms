// link:- https://leetcode.com/problems/search-in-a-binary-search-tree/
// tc:- o(n)
// sc:- o(n)

// approach 1

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)
        {
            return NULL;
        }

        TreeNode* node = new TreeNode();
        if(val > root->val)
        {
            node = searchBST(root->right, val);
        }
        else if( val < root->val)
        {
            node = searchBST(root->left, val);
        }
        else if(val == root->val)
        {
            node = root;
        }
        else
        {
            return NULL;
        }
        return node;
    }
};
