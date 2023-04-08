// link :- https://practice.geeksforgeeks.org/problems/delete-a-node-from-bst/1
// tc:- o(height of bst)
// sc:- o(h)
// approch 1

Node *deleteNode(Node *root, int X) {
    // your code goes here
    if(!root)
    {
        return root;
    }
    
    if(X < root->data)
    {
        root->left = deleteNode(root->left, X);
    }
    
    else if(X > root->data)
    {
        root->right = deleteNode(root->right, X);
    }
    
    else
    {
        if(!root->right && !root->left)
        {
            return NULL;
        }
        if(!root->left && root->right)
        {
            Node * temp = root->right;
            delete(root);
            return temp;
        }
        if(root->left && !root->right)
        {
            Node *temp = root->left;
            delete(root);
            return temp;
        }
        if(root->left && root->right)
        {
            Node * temp = root->right;
            while(root->left)
            {
                temp = root->left;
            }
            
            root->data = temp->data;
            
            root->right = deleteNode(root->right, root->data);
        }
    }
    return root;
}

// approch 2

Node* inordersuc(Node* root)
{
   root = root->right;
   while(root->left)
   {
       root = root->left;
   }
   return root;
}

Node *deleteNode(Node *root, int X) {
    // your code goes here
    if(!root)
    {
        return NULL;
    }
    
    if(X > root->data)
    {
        root->right = deleteNode(root->right, X);
    }
    
    else if(X < root->data)
    {
        root->left = deleteNode(root->left, X);
    }
    
    else
    {
       if(!root->left && !root->right)
       {
           delete(root);
           return NULL;
       }
       
       if(!root->left)
       {
          Node* temp = root;
          root = root->right;
          delete(temp);
        //   return root;
       }
       else if(!root->right)
       {
           Node* temp = root;
           root = root->left;
           delete(temp);
        //   return root;
       }
       else
       {
        //   2 children
        Node* temp = inordersuc(root);
        root->data = temp -> data;
        root->right = deleteNode(root->right, temp->data);
        // return root;
       }
    }
    return root;
}
