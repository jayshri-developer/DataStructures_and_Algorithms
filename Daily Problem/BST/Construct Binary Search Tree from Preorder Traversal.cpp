// link:- https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal
// tc:- o(n)
// sc:- o(n)

// approach 1

class Solution {
public:
    TreeNode* helper(vector<int> &preorder, int &i, int ubound)
    {
        if(i == preorder.size() || preorder[i] > ubound)
        {
            return NULL;
        }

        TreeNode* node = new TreeNode(preorder[i++]);
        node->left = helper(preorder, i, node->val);
        node->right = helper(preorder, i, ubound);

        return node;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
       
        int i = 0;
        return helper(preorder, i, INT_MAX);
    }
};
