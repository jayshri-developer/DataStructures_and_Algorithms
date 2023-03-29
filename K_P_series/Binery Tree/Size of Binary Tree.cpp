// link :- https://practice.geeksforgeeks.org/problems/size-of-binary-tree/1
// tc:- o(n)
// sc:-
// approch 1

int getSize(Node* node)
{
    return 1 + (node->left ? getSize(node->left) : 0) + (node->right ? getSize(node->right) : 0);
}


// approch 2

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left;
     Node* right;
}; */

/* Computes the number of nodes in a tree. */
int getSize(Node* node)
{
   // Your code here
   if(node == nullptr)
   {
       return 0;
   }
   
   return 1 + getSize(node->left) + getSize(node->right);
}
