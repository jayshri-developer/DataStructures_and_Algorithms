// link:- https://practice.geeksforgeeks.org/problems/floor-in-bst/1
// tc:- o(n)
// sc:- o(n)

// approach 1

void helper(Node* root, int x, int &initial)
{
    if(!root)
    {
        return;
    }
    
    helper(root->left, x, initial);
    if(root->data <= x)
    {
        initial = root->data;
    }
    helper(root->right, x, initial);
}

int floor(Node* root, int x) {
    // Code here
    int initial = -1;
    helper(root, x, initial);
    
    return initial;
}

