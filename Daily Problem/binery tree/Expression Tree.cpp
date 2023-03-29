// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/expression-tree/1
// TC: O(n)

class Solution{
  public:
    /*You are required to complete below method */
    int evalTree(node* root) {
        // Your code here
        if(root == NULL)
        {
            return 0;
        }
        
        int left = evalTree(root->left);
        int right = evalTree(root->right);
        
        if(root->data == "*")
        {
            return left * right;
        }
        else if(root->data == "+")
        {
            return left + right;
        }
        else if(root->data == "/")
        {
            return left / right;
        }
        else if(root->data == "-")
        {
            return left - right;
        }
        else
        {
            return stoi(root->data); 
            // to handle negative value
        }
    }
};

// approch 2

class Solution{
  public:
    /*You are required to complete below method */
    int evalTree(node* root) {
        // Your code here
        if(!root)
        {
            return 0;
        }
        if(!root->left && !root->right)
        {
        	string curr = root->data;
        	int sign = 1;
        	if(curr[0] == '-')
        	{
        		curr = curr.substr(1, curr.size()-1);
        		sign = -1;
        	}
        	return sign* stoi(curr);
        }

        
        int l = evalTree(root->left);
        int r = evalTree(root->right);
        
        if(root->data  == "*")
        {
            return l * r;
        }
        else if(root->data  == "-")
        {
            return l - r;
        }
        else if(root->data  == "+")
        {
            return l + r;
        }
        else
        {
             return l / r;
        }
        // else if(root->data  == "/")
        // {
        //     return l / r;
        // }
        // else
        // {
        //     return stoi(root->data);
        // }
        
    }
};
