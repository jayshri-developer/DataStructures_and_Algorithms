// link :- https://practice.geeksforgeeks.org/problems/preorder-traversal/1
// tc:- o(n)
// sc:- o(n)

void helper(Node* root, vector<int> &ans)
{
    if(!root)
    {
        return;
    }
    
    ans.push_back(root->data);
    helper(root->left, ans);
    helper(root->right, ans);
}

vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> ans;
  helper(root, ans);
  return ans;
}
