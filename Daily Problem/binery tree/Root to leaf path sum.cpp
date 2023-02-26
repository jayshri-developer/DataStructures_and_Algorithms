// Approach 1 
//gfg link:  https://practice.geeksforgeeks.org/problems/root-to-leaf-path-sum/1
// TC: O(n)

class Solution
{
    public:
    bool hasPathSum(Node *root, int s) 
    {
        if(root == NULL)
        {
            return false;
        }
        if(s < 0)
        {
            return false;
        }
        
        if(s == root->data && root->left == NULL && root->right == NULL)
        {
            return true; 
        }
        
        return (hasPathSum(root->left, s - root->data) || hasPathSum(root->right, s - root->data));
    }
};


// Approach 2
//gfg link:  https://leetcode.com/problems/path-sum/
// TC: O(n)


class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
        {
            return false; 
        }                                      
        sum = sum - root->val; 

        if(sum == 0 && !root->left && !root->right)
        {
            return true; 
        }             
        return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
    }
};
