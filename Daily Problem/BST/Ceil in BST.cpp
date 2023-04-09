// link:- https://practice.geeksforgeeks.org/problems/implementing-ceil-in-bst/1
// tc:- o(n)
// sc:- o(n)

// approach 1

void helper(Node* root, int input, int &initial)
{
    if(!root) 
    {
        return;
    }
    
    helper(root->right, input, initial);
    if(root->data >= input)
    {
        initial = root->data;
    }
    helper(root->left, input, initial);
}

int findCeil(Node* root, int input) {

    // Your code here
    int initial = -1;
    helper(root, input, initial);
    return initial;
}
