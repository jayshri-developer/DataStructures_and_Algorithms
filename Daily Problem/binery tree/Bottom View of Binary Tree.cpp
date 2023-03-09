// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1
// TC: O(N)+o(n)


class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root == NULL)
        {
            return ans;
        }
        
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            
            Node* node = it.first;
            int col = it.second;
            
            mp[col] = node->data;
            
            if(node->left)
            {
                q.push({node->left, col-1});
            }
            if(node->right)
            {
               q.push({node->right, col+1}); 
            }
        }
        
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
