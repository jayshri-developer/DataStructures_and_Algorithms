// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/postorder-traversal-iterative/1
// TC: O(N)

// use two stack 

class Solution{
    public:
    vector<int> postOrder(Node* node) {
        // code here
        vector<int> ans;
        
        stack<Node*> s1, s2;
        s1.push(node);
        
        while(!s1.empty())
        {
            Node* temp = s1.top();
            s1.pop();
            
            s2.push(temp);
            
            if(temp->left)
            {
                s1.push(temp->left);
            }
            if(temp->right)
            {
                s1.push(temp->right);
            }
        }
        
        while(!s2.empty())
        {
            ans.push_back(s2.top()->data);
            s2.pop();
        }
        
        return ans;
    }
};


// one stack


class Solution{
    public:
    vector<int> postOrder(Node* node) {
        // code here
        vector<int> ans;
        stack<Node*> st;
        st.push(node);
        
        while(!st.empty())
        {
            Node* temp = st.top();
            if(temp->left)
            {
                st.push(temp->left);
                temp->left = NULL;
            }
            
            else if(temp->right)
            {
                st.push(temp->right);
                temp->right =NULL;
            }
            else
            {
                ans.push_back(temp->data);
                st.pop();
            }
        }
        return ans;
    }
};
