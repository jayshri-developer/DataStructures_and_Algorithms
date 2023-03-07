// Approach 1
//GFG link: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
// TC: O(N)+o(n)

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == NULL)
        {
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            vector<int> curr;
            int s = q.size();

            for(int i = 0; i<s; i++)
            {
                TreeNode* f = q.front();
                q.pop();

                curr.push_back(f->val);

                if(f->left) { q.push(f->left); }
                if(f->right) { q.push(f->right); }

            }
            ans.push_back(curr);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
