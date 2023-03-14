// TC:- o(n)
// SC:- o(n)

class Solution {
public:
    
    bool helper(TreeNode* side1, TreeNode* side2)
    {
        if(side1 == NULL || side2 == NULL)
        {
            return side1 == side2;
        }

        if(side1->val == side2->val)
        {
            return helper(side1->left, side2->right) && helper(side1->right, side2->left);
        }
        return false;
    }

    bool isSymmetric(TreeNode* root) {
        
        return helper(root->left, root->right);
    }
};
