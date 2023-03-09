// Approach 1
// link: https://www.codingninjas.com/codestudio/problems/path-in-a-tree_3843990
// TC: O(N)


#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/
bool ispresent(TreeNode<int> *temp, int x, vector<int> &ans )
{
	if(temp == NULL)
	{
		return false;
	}

	if(temp->data == x)
	{
		return true;
	}

	if(ispresent(temp->left, x, ans))
	{
		ans.push_back(temp->left->data);
		return true;
	}
	if(ispresent(temp->right, x, ans))
	{
		ans.push_back(temp->right->data);
		return  true;
	}

	return false;
}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	vector<int> ans;

	ispresent(root, x, ans);
	ans.push_back(root->data);
	reverse(ans.begin(), ans.end());

	return ans;
}

