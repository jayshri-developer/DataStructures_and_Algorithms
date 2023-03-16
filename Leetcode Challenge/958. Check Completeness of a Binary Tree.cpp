// TC:- O(N)
// SC:- O(N)

class Solution {
public:
    int totalNode(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }

        return 1 + totalNode(root->left) + totalNode(root->right);
    }

    bool helper(TreeNode *root, int a, int n)
    {
        if(root==NULL)
        {
            return true;
        }
        if(a >= n)
        {
            return false;
        }

        return helper(root->left, 2*a+1, n) && helper(root->right, 2*a+2, n);
    }


bool isCompleteTree(TreeNode* root) {
    if(root == NULL)
    {
        return true;
    }

    int n = totalNode(root);
    return helper(root,0,n);
}
};
