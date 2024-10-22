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
int result = 0;
int helper(TreeNode* root)
{
    if(root == NULL)
    {
        return NULL;
    }
    int leftside =0;
    int rightside=0;

    if(root->left)
    {
        leftside = helper(root->left);
    }
    if(root->right)
    {
        rightside =  helper(root->right);
    }
    // int leftside = helper(root->left);
    // int rightside =  helper(root->right);

    result = max(result, 1+ leftside + rightside);

    return 1+ max(leftside, rightside);
}
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return result-1;    
    }
};