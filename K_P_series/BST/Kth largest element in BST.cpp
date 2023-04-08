// link :- https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1
// tc:- o(n)
// sc:- o(n)
// approch 1

class Solution
{
    public:
    
    Node* helper(Node* root, int k, int &count)
    {
        if(!root)
        {
            return NULL;
        }

        Node* node = helper(root->right, k, count);
        if(node)
        {
            return node;
        }
        count++;
        if(count == k)
        {
            return root;
        }

        return helper(root->left, k, count);
    }
    
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int count = 0;

        Node* node = helper(root, K, count);

        return node ? node->data : -1;
    }
};
