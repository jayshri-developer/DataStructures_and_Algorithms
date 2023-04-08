// link :- https://practice.geeksforgeeks.org/problems/level-order-traversal/1
// tc:- o(n)
// sc:- o(n)
// approch 1

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> ans;
      
      queue<Node*> q;
      q.push(node);
      
      while(!q.empty())
      {
          Node* temp = q.front();
          q.pop();
          
          if(temp->left)
          {
              q.push(temp->left);
          }
          
          if(temp->right)
          {
              q.push(temp->right);
          }
          
          ans.push_back(temp->data);
      }
      return ans;
    }
};

// approch 2

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if(!root)
        {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            vector<int> ans;

            int index = q.size();

            while(index--)
            {
               TreeNode* temp = q.front();
               q.pop();

               if(temp->left)
               {
                   q.push(temp->left);
               } 
               if(temp->right)
               {
                   q.push(temp->right);
               }
               ans.push_back(temp->val);
            }

            result.push_back(ans);
        }
        return result;
    }
};
