// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1
// TC: O(N)

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       if(root == NULL)
       {
           return NULL;
       }
       
       if(root->data == n1 || root->data == n2)
       {
           return root;
       }
       
       Node* left = lca(root->left, n1, n2);
       Node* right = lca(root->right, n1, n2);
       
       if(left && right)
       {
           return root;
       }
       
       if(left != NULL)
       {
           return left;
       }
       
       return right;
    }
};


// approach 2

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL)
        {
            return NULL;
        }

        if(root == p || root == q)
        {
            return root;
        }

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if(left && right)
        {
            return root;
        }

        if(left != NULL)
        {
            return left;
        }

        return right;
    }
};
