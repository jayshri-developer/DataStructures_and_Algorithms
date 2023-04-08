// link :- https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
// tc:- o(n)
// sc:- o(height of tree)
// approch 1

class Solution
{
    public:
    void helper( Node* root, vector<int> &ans, int level)
    {
        if(root == NULL)
        {
            return;
        }
        
        if(level == ans.size())
        {
            ans.push_back(root->data);
        }
        
        helper(root->right, ans, level+1);
         helper(root->left, ans, level+1);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       
       helper(root, ans, 0);
       
       return ans;
    }
};

// approch 2

class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       queue<Node*> q;
       q.push(root);
      while(!q.empty())
      {
          Node* temp ;
          int s = q.size();
         
          for(int i = 0; i<s; i++)
          {
              temp = q.front();
              q.pop();
              
              if(temp->left)
              {
                  q.push(temp->left);
              }
              if(temp->right)
              {
                  q.push(temp->right);
              }
          }
          ans.push_back(temp->data);
      }
      return ans;
    }
};
