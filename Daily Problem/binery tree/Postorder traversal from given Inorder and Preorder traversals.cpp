// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/postorder-traversal-from-given-inorder-and-preorder-traversals/1
// TC: O(n)

int search(int arr[], int x, int n)
{
    for(int i =0; i< n; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

void printPostOrder(int in[], int pre[], int n)
{
//Your code here
    int root = search(in, pre[0], n);
    
    if(root != 0)
    {
        printPostOrder(in, pre+1, root);
    }
    
    if(root != n-1)
    {
        printPostOrder(in + root +1 , pre + root + 1, n - root - 1);
    }
    
    cout<<pre[0]<< " ";
}
