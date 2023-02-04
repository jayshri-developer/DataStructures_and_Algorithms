// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1
// TC: O(N)

vector<int> findSpiral(Node *root)
{
    //Your code here
    if(root == NULL)
        return {};
    vector<int> res;
    stack<Node*> st1;  
    stack<Node*> st2;  
    st1.push(root);
    while (!st1.empty() || !st2.empty()) 
    {
        while (!st1.empty()) 
        {
            Node* temp = st1.top();
            st1.pop();
            res.push_back(temp->data);
 
            if (temp->right)
                st2.push(temp->right);
            if (temp->left)
                st2.push(temp->left);
        }
        while (!st2.empty()) 
         {
            Node* temp = st2.top();
            st2.pop();
            res.push_back(temp->data);
 
            if (temp->left)
                st1.push(temp->left);
            if (temp->right)
                st1.push(temp->right);
        }
    }
    return res;
}
