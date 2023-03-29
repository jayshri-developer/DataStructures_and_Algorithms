// link :- https://leetcode.com/problems/binary-tree-inorder-traversal/
// tc:- o(n)
// sc:- o(n)

// approch 1

class Solution {
public:
    void helper(TreeNode* root, vector<int> &ans)
    {
        if(!root)
        {
            return;
        }
        
        if(root->left)
        {
            helper(root->left, ans);
        }

        ans.push_back(root->val);
        
        if(root->right)
        {
            helper(root->right, ans);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
};

// approch 2

class Solution {
public:
    vector<int> ans;

    void helper(TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }

        helper(root->left);
        ans.push_back(root->val);
        helper(root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        helper(root);
        return ans;
    }
};