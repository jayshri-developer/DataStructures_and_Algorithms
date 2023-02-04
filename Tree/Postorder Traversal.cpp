// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/postorder-traversal/1
// TC: O(N)

vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == NULL)
  {
      return ans;
  }
  
  postOrder(root->left);
  postOrder(root->right);
  cout<< root->data<<" ";
}
