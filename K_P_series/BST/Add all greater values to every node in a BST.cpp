// link:- https://practice.geeksforgeeks.org/problems/add-all-greater-values-to-every-node-in-a-bst/1
// tc:- o(n)
// sc:- o(n)

// approach 1
void helper(Node* root, int &sum)
{
    if(root->right)
    {
        helper(root->right, sum);
    }
    
    root->data += sum ;
    sum = root->data;
    if(root->left)
    {
        helper(root->left, sum);
    }
}

Node* modify(Node *root)
{
    // Your code here
    int sum = 0;
    
    helper(root, sum);
    
    return root;
}
