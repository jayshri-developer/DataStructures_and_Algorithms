// link:- https://leetcode.com/problems/recover-binary-search-tree/
// tc:- o(n)
// sc:- o(n)

// approach 1
class Solution {
private:
    TreeNode* start;
    TreeNode* middle;
    TreeNode* end;
    TreeNode* prev;
public:
    void helper(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        helper(root->left);
        if(prev != NULL && (root->val < prev->val))
        {
            if(start == NULL)
            {
                start = prev;
                middle = root;
            }
            else
            {
                end = root;
            }
        }
        prev = root;
        helper(root->right);
    }
    void recoverTree(TreeNode* root) {
        start = middle = end = NULL;

        prev = new TreeNode(INT_MIN);
        helper(root);

        if(start && end)
        {
            swap(start->val , end->val);
        }
        else if(start && middle)
        {
            swap(start->val, middle->val);
        }

    }
};
