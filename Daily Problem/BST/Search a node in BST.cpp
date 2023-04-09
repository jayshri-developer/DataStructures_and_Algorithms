// link:- https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1
// tc:- o(n)
// sc:- o(n)

// approach 1
bool search(Node* root, int x) {
    // Your code here
    if(!root)
    {
        return 0;
    }
   
    if(x > root->data)
    {
        return search(root->right, x);
    }
    else if(x < root->data)
    {
        return search(root->left, x);
    }
    else if(x == root->data)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    return 0;
}
