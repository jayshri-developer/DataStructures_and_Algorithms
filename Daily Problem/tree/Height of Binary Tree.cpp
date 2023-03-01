// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
// TC: O(n)


class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(root == NULL)
        {
            return 0;
        }
        
        return 1+ max(height(root->left), height(root->right));
    }
};
