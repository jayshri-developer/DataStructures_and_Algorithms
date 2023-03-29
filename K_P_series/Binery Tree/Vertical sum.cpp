// link :- https://practice.geeksforgeeks.org/problems/vertical-sum/1
// tc:- o(n)
// sc:-
// approch 1

class Solution{
    map<int, int> mp;
  public:
  void helper(Node* root, int distance)
  {
      mp[distance] += root->data;
      
      if(root->left)
      {
          helper(root->left, distance-1);
      }
      
      if(root->right)
      {
          helper(root->right, distance+1);
      }
  }
    vector <int> verticalSum(Node *root) {
        // add code here.
        vector<int> ans;
        helper(root, 0);
        
        for(auto x : mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
