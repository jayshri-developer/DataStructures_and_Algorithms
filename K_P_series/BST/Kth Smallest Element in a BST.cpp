// link :- https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/
// tc:- o(height of bst)
// sc:- o(height of bst)
// approch 1

class Solution {
public:

    TreeNode* helper(TreeNode* root, int k, int &count)
    {
        if(!root)
        {
            return NULL;
        }

        TreeNode* node = helper(root->left, k, count);
        if(node)
        {
            return node;
        }
        count++;
        if(count == k)
        {
            return root;
        }

        return helper(root->right, k, count);
    }

    int kthSmallest(TreeNode* root, int k) {
        int count = 0;

        TreeNode* node = helper(root, k, count);

        return node ? node->val : 1;
    }
};
