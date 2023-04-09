// link:- https://practice.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1
// tc:- o(n)
// sc:- o(n)

// approach 1

Node* creattree(vector<Node*> ans, int start, int end)
{
    if(start > end)
    {
        return NULL;
    }
    int mid = start + (end-start)/2;
    
    Node* newnode = ans[mid];
    newnode->left = creattree(ans, start, mid - 1);
    newnode->right = creattree(ans, mid+1, end);
    return newnode;
    
}

void helper(Node* root, vector<Node*> &ans)
{
    if(root->left)
    {
        helper(root->left, ans);
    }
    
    ans.push_back(root);
    
    if(root->right)
    {
        helper(root->right, ans);
    }
    
}

Node* buildBalancedTree(Node* root)
{
	// Code here
	if(!root)
	{
	    return NULL;
	}
	
	vector<Node*> ans;
	helper(root, ans);
	Node* newnode = creattree(ans, 0, ans.size()-1);
	return newnode;
}
