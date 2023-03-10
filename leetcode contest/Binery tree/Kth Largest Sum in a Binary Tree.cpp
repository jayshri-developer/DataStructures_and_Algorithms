problem link :- https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/
leetcode no:- 2583
TC/SC:- o(n logn)

class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<vector<int>> ans;

        if(!root)
        {
            return -1; 
        }       
        queue<TreeNode*> q;
        priority_queue<long long> pq;
        q.push(root);

        while(!q.empty())
        {
            int n = q.size();
            long long sum = 0;
            for(int i = 0; i<n; i++)
            {
                TreeNode* temp = q.front();
                q.pop();

                sum += temp->val;

                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            pq.push(sum);
        }

        if(pq.size() < k)
        {
            return -1;
        }

        k = k-1;

        while(k--)
        {
            pq.pop();
        }

        return pq.top();
    }
};
