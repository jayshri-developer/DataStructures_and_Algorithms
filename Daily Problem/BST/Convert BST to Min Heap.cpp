// link:- https://www.codingninjas.com/codestudio/problems/convert-bst-to-min-heap_920498?leftPanelTab=0
// tc:- o(n)
// sc:- o(n)

// approach 1

void inorder(BinaryTreeNode* root, vector<int> &arrayWithNodes)
{
	if (root == NULL)
	{
		return;
	}

	// Recursive call to the left child of current node.
	inorder(root -> left, arrayWithNodes);
	arrayWithNodes.push_back(root -> data);

	// Recursive call to the right child of current node.
	inorder(root -> right, arrayWithNodes);
}

void convertToHeap(BinaryTreeNode* root, vector<int> &arrayWithNodes, int &idx)
{
	if (root == NULL)
	{
		return;
	}

	root -> data = arrayWithNodes[idx] ;

	idx++;

	// Recursive call to the left child of current node.
	convertToHeap(root -> left, arrayWithNodes, idx);

	// Recursive call to the right child of current node.
	convertToHeap(root -> right, arrayWithNodes, idx);
}

BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	vector<int> arrayWithNodes;

	inorder(root, arrayWithNodes);
	int idx = 0;

	convertToHeap(root, arrayWithNodes, idx);
	return root;
}