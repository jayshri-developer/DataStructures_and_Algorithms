// tc:- o(n)
// sc:- o(h) h- height of tree
// link:- https://leetcode.com/problems/validate-binary-search-tree/
// https://practice.geeksforgeeks.org/problems/check-for-bst/1
// approch 1

class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool helper(Node* root, int min, int max)
    {
        if(!root)
        {
            return true;
        }
        
        if(root->data <= min || root->data >= max)
        {
            return false;
        }
        
        return helper(root->left, min, root->data) &&
        helper(root->right, root->data, max);
    }
    
    bool isBST(Node* root) 
    {
        // Your code here
        return helper(root, INT_MIN, INT_MAX);
        
    }
};

// approvh 2  decreace recursive call

class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool helper(Node* root, int min, int max)
    {
        if(!root)
        {
            return true;
        }
        
        if(root->data <= min || root->data >= max)
        {
            return false;
        }
        
        return (root->left ? helper(root->left, min, root->data) : true) &&
        (root->right ? helper(root->right, root->data, max) : true);
    }
    
    bool isBST(Node* root) 
    {
        // Your code here
        return helper(root, INT_MIN, INT_MAX);
        
    }
};
