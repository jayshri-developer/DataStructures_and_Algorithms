// link :- https://practice.geeksforgeeks.org/problems/root-to-leaf-path-sum/1
// tc:- o(n)
// sc:-
// approch 1

class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
    // Your code here
    if(!root->left && !root->right)
    {
        return (S == root->data);
    }
    
    if(root->left && hasPathSum(root->left, S - root->data))
    {
        return true;
    }
    
    if(root->right && hasPathSum(root->right, S - root->data))
    {
        return true;
    }
    
    return false;
}
};


// approch 2

struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
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
