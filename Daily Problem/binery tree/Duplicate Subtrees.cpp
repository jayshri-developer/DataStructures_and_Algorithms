// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/duplicate-subtrees/1
// TC: O(N)
string helper(Node* root, vector<Node*> &v, unordered_map<string, int> &m)
{
    if(!root)
    {
        return "";
    }
    
    string left = helper(root->left, v, m);
    string right = helper(root->right, v, m);
    
    string ans = to_string(root->data) + "$" + left + "$" + right;
    
    if(m[ans] == 1)
    {
        v.push_back(root);
    }
    
    m[ans]++;
    
    return ans;
}

vector<Node*> printAllDups(Node* root)
{
    // Code here
    
    vector<Node*> v;
    unordered_map<string, int> m; 
    
    helper(root, v, m);
    
    return v;
}


// approch 2
// post order use
string helper(Node* root, vector<Node*> &v, unordered_map<string, int> &m)
{
    if(!root)
    {
        return "";
    }
    
    string left = helper(root->left, v, m);
    string right = helper(root->right, v, m);
    
    // string ans = to_string(root->data) + "$" + left + "$" + right;
     string ans =  left + "$" + right + "$" + to_string(root->data);
     
    
    
    m[ans]++;
    
    if(m[ans] == 2)
    {
        v.push_back(root);
    }
    return ans;
}

vector<Node*> printAllDups(Node* root)
{
    // Code here
    
    vector<Node*> v;
    unordered_map<string, int> m; 
    
    helper(root, v, m);
    
    return v;
}