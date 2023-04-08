// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1
// TC: O(N)


class Solution {
  public:
  
    int helper(Node* root, int &dia)
    {
        if(!root)
        {
            return 0;
        }
        
        int left = helper(root->left, dia);
        int right = helper(root->right, dia);
        
        dia = max(dia, left+right+1);
        
        return max(left, right)+1;
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        int dia = 0;
        
        helper(root, dia);
        
        return dia;
    }
};
