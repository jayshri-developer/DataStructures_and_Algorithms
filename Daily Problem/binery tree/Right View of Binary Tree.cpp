// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
// TC: O(N)

class Solution
{
    public:
    void helper( Node* root, vector<int> &ans, int level)
    {
        if(root == NULL)
        {
            return;
        }
        
        if(level == ans.size())
        {
            ans.push_back(root->data);
        }
        
        helper(root->right, ans, level+1);
         helper(root->left, ans, level+1);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       
       helper(root, ans, 0);
       
       return ans;
    }
};
