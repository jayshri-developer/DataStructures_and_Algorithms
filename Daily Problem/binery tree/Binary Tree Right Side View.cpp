// Approach 1
// PL:- https://leetcode.com/problems/binary-tree-right-side-view/
// TC:- O(n)
// SC:- O(n)


class Solution {
public:
    void helper(TreeNode* root, vector<int> &ans, int level)
    {
        if(root == NULL)
        {
            return ;
        }

        if(level == ans.size())
        {
            ans.push_back(root->val);
        }

        helper(root->right, ans, level+1);
        helper(root->left, ans, level+1);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int level = 0;
        helper(root, ans, level);
        return ans;
    }
};