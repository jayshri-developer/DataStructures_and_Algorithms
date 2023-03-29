// link :- https://practice.geeksforgeeks.org/problems/sum-of-binary-tree/1
// tc:- o(n)
// sc:-
// approch 1

/*Structure of the node of the binary tree
struct Node
{
	int key;
	Node* left, *right;
};
*/
// Function should return the sum of all the elements
// of the binary tree
long int sumBT(Node* root)
{
    // Code here
    if(root == nullptr)
    {
        return 0;
    }
    
    return root->key + sumBT(root->left) + sumBT(root->right);
}

// approch 2

long int sumBT(Node* root)
{
    return root->key + (root->left ? sumBT(root->left) : 0) + (root->right ? sumBT(root->right) : 0);
}
