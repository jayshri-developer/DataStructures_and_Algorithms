// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/binary-tree-representation/1?
// TC: O(N)

class Solution{
public:

    void create_tree(node* root0, vector<int> &vec){
        //Your code goes here
        queue<node*> q;
        q.push(root0);
        int i =1; 
        int n = vec.size();
        while(i<n)
        {
            node* root = q.front();
            q.pop();
            node* left = newNode(vec[i++]);
            root->left = left;
            q.push(left);
            if(i >= n)
            {
                break;
            }
            node* right = newNode(vec[i++]);
            root->right = right;
            q.push(right);
        }
    }

};
