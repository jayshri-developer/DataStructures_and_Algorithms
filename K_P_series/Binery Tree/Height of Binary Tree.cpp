// link :- https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
// tc:- o(n)
// sc:-
// approch 1

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node == nullptr)
        {
            return 0;
        }
        
        int l = 0;
        int r = 0;
        
        if(node->left)
        {
            l = height(node->left);
        }
        
        if(node->right)
        {
            r = height(node->right);
        }
        
        return 1 + max(l, r);
    }
};

// approch 2

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        
        if(node == nullptr)
        {
            return 0;
        }
        
        return 1 + max(height(node->left), height(node->right));
    }
};

// approch 3

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
        {
            return 0;
        }

        int leftdepth = maxDepth(root->left);
        int rightdepth = maxDepth(root->right);

        return max(leftdepth, rightdepth) + 1;
    }
    