// link :- https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1
// tc:- o(height of bst)
// sc:-
// approch 1

Node* insert(Node* root, int Key) {
    // Your code here
    if(!root)
    {
        return new Node(Key);
    }
    
    if(root->data == Key)
    {
        return root;
    }
    
    if(Key > root->data)
    {
        root->right = insert(root->right, Key);
    }
    else
    {
        root->left = insert(root->left, Key);
    }
    
    return root;
}

// approch 2

Node* insert(Node* root, int Key) {
    // Your code here
    if(!root)
    {
        Node* node = new Node(Key);
        return node;
    }
    
    if(root->data == Key)
    {
        return root;
    }
    
    if(Key > root->data)
    {
        root->right = insert(root->right, Key);
    }
    else
    {
        root->left = insert(root->left, Key);
    }
    
    return root;
}
