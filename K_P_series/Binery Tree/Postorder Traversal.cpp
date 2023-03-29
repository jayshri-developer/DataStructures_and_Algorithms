// link :- https://practice.geeksforgeeks.org/problems/postorder-traversal/1
// tc:- o(n)
// sc:- o(n)

void helper(Node* root, vector<int> &ans)
{
    if(!root)
    {
        return;
    }
    
    helper(root->left, ans);
    helper(root->right, ans);
    ans.push_back(root->data);
}

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans; 
  helper(root, ans);
  return ans;
}
