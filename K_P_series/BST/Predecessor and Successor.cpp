// link:- https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1
// tc:- o(h)
// sc:- o(h)

// approach 1

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here
    if(!root)
    {
        return;
    }
    
    if(key ==  root->key)
    {
        if(root->left)
        {
            pre = root->left;
            while(pre->right)
            {
                pre = pre->right;
            }
        }
        
        if(root->right)
        {
            suc = root->right;
            while(suc->left)
            {
                suc = suc->left;
            }
        }
    }
    else if( key > root->key)
    {
        pre = root;
        findPreSuc(root->right, pre, suc, key);
    }
    else
    {
        suc = root;
        findPreSuc(root->left, pre, suc, key);
    }

}
