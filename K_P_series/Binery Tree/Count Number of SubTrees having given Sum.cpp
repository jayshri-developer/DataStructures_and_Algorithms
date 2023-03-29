// link :- https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1
// tc:- o(n)
// sc:-
// approch 1


//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
//Function to count number of subtrees having sum equal to given sum.

int helper(Node* root, int x, int &count)
{
   int sum = 0;
   int lsum = 0;
   int rsum = 0;
   
   if(root->left)
   {
       lsum = helper(root->left, x, count);
   }
   
   if(root->right)
   {
       rsum = helper(root->right, x, count);
   }
   
   sum = root-> data + lsum + rsum;
   
   if(sum == x)
   {
       count++;
   }
   
   return sum;
}

int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int count = 0;
	helper(root, X, count);
	
	return count;
}
