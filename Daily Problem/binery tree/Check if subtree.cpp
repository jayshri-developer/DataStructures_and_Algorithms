// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/check-if-subtree/1
// leetcode :- https://leetcode.com/problems/subtree-of-another-tree/description/
// TC: O(N^2)


class Solution {
public:
    bool isSame(TreeNode *root, TreeNode *subRoot)
    {
        if(root == NULL && subRoot == NULL)
        {
            return true;
        }

        if(root == NULL || subRoot == NULL)
        {
            return false;
        }
        
        if (root->val != subRoot->val) 
        {
            return false;
        }
        
        return isSame(root->left, subRoot->left) && isSame(root->right, subRoot->right);
        
    } 
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        
        if(root == NULL)
        {
            return false;
        }

        if (isSame(root,subRoot)) 
        {
            return true;
        }
        
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
        
    } 
};


