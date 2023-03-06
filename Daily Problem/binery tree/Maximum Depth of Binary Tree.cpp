// Approach 1 (recursion)
//GFG link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
// TC: O(num of nodes)
// SC: O(height of the tree) 

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
        {
            return 0;
        }

        int leftdepth = maxDepth(root->left);
        int rightdepth = maxDepth(root->right);

        return max(leftdepth, rightdepth) + 1;
    }
};
