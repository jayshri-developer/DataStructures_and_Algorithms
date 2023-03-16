// TC:- O(N)
// SC:- O(N)

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
    TreeNode* helper(vector<int> inorder, vector<int> postorder, int instart, int inend, int poststart, int postend)
    {
        if(inend < instart)
        {
            return NULL;
        }

        TreeNode* root = new TreeNode(postorder[postend]);
        int index = instart;
        for(int i =instart; i <= inend; i++)
        {
            if(inorder[i] == root->val)
            {
                index = i;
                break;
            }
        }

        int inleftlen = index - instart;

        root->left = helper(inorder, postorder, instart, index-1, poststart, poststart + inleftlen -1);
        root->right = helper(inorder, postorder,index+1, inend, poststart + inleftlen, postend -1);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1);
    }
};
