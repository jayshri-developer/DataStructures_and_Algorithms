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
    void dfs(TreeNode* root, int n, int &total)
    {
        if(root == NULL)
        {
            return;
        }

        n = n*10 + root->val;

        if(root->left)
        {
            dfs(root->left, n, total);
        }

        if(root->right)
        {
            dfs(root->right, n, total);
        }
        
        if(root->left == NULL && root->right == NULL)
        {
            total = total + n;
        }
    }

    int sumNumbers(TreeNode* root) {
        int total = 0;
        dfs(root, 0, total);
        return total;
    }
};