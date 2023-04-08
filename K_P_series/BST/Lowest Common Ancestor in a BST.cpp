// link:- https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1
// tc:- o(h)
// sc:- o(h)

// approach 1

Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(!root)
   {
       return NULL;
   }
//   also some extra chaeck too

    if(n1 > root->data && n2 < root->data)
    {
        return root;
    }
    
    if(n1 < root->data && n2 > root->data)
    {
        return root;
    }
    
    if(root->data == n1 || root->data ==n2)
    {
        return root;
    }
   
   if(n1 > root->data && n2 > root->data)
   {
       return LCA(root->right, n1, n2);
   }
   
   if(n1 < root->data && n2 < root->data)
   {
       return LCA(root->left, n1, n2);
   }
   
   return root;
}

// approAach 2
// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
        {
            return NULL;
        }

        if(p->val > root->val && q->val < root->val)
        {
            return root;
        }

        if(p->val < root->val && q->val > root->val)
        {
            return root;
        }

        if(p->val == root->val || q->val == root->val)
        {
            return root;
        }
        if(p->val > root->val && q->val > root->val)
        {
            return lowestCommonAncestor(root->right, p, q);
        }

        if(p->val < root->val && q->val < root->val)
        {
            return lowestCommonAncestor(root->left, p, q);
        }
        return root;
    }
};
