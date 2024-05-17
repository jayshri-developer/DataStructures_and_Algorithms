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
    TreeNode *helper(TreeNode* root, int target, int &count)
    {
        if(root == NULL)
        {
            return root;
        }
        if(root->val == target && (root->left == NULL && root->right == NULL))
        {
            count++;
            return NULL;
        }

        root->left = helper(root->left, target, count);
        root->right = helper(root->right, target, count);

        return root;
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        // int count = 0;
        // helper(root, target, count);
        // while(count != 0)
        // {
        //     count = 0;
        //     helper(root, target, count);
        // }
        //  return root;

        int count=0;
        do{
            count=0;
            root=helper(root,target,count);
        }while(count!=0);
    
        return root;
    }
};