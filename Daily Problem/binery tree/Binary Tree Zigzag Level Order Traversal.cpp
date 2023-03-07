// Approach 1
//GFG link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
// TC: O(N)

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
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

                if(f->left){  q.push(f->left);  }

                if(f->right){   q.push(f->right);  }
            }
            if(ans.size() % 2 == 1)
            {
                reverse(curr.begin(), curr.end());
            }
            ans.push_back(curr);
        }

    return ans;
    }
};
