// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/preorder-traversal/1
// TC: O(N)

vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == NULL)
  {
      return ans;
  }
     cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
}

// Approach 2
//GFG link: https://leetcode.com/problems/binary-tree-preorder-traversal/description/
// TC: O(N)

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nodes;
        stack<TreeNode*> todo;
        while (root || !todo.empty()) {
            if (root) {
                nodes.push_back(root -> val);
                if (root -> right) {
                    todo.push(root -> right);
                }
                root = root -> left;
            } else {
                root = todo.top();
                todo.pop();
            }
        }
        return nodes;
    }
};

// Approach 3
//GFG link: https://leetcode.com/problems/binary-tree-preorder-traversal/description/
// TC: O(N)

class Solution {
public:
    vector<int> answer;
    
    void dfs(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        // Visit the root first, then the left subtree, then the right subtree.

        answer.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        dfs(root);
        return answer;
    }
};