// Approach 1
//leetcode link: https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/
// TC: O(n * logn * logn * lign)


class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        map<int, map<int, multiset<int>>> mp;
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});

        while(!q.empty())
        {
            auto p = q.front();
            q.pop();

            TreeNode* node = p.first;
            int x = p.second.first;
            int y = p.second.second;

            mp[x][y].insert(node->val);

            if(node->left)
            {
                q.push({node->left, {x-1, y+1}});
            }

            if(node->right)
            {
                q.push({node->right, {x+1, y+1}});
            }
        }
        vector<vector<int>> ans;
        for(auto q: mp)
        {
            vector<int> col;
            for(auto p:q.second)
            {
                col.insert(col.end(), p.second.begin(), p.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};



// approach 2
// gfg link:- https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
// tc:- o(n)

class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,vector<int>> mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(q.size()){
            
            auto a = q.front();
            q.pop();
            Node* curr = a.first;
            int val = a.second;
            mp[val].push_back(curr->data);
            
            if(curr->left)q.push({curr->left, val-1});
            if(curr->right)q.push({curr->right, val+1});
        }
        vector<int> res;
       
        for(auto it: mp){
            
             vector<int> ans = it.second;
             for(auto ti : ans){
                 res.push_back(ti);
             }
            
        }
        
        return res;
        
    }
};
