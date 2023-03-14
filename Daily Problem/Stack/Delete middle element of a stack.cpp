// PL:- https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1
// TC: O(N)
// SC:- O(N)

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int> st;
        int len = (sizeOfStack / 2);
        
        while(len--)
        {
            st.push(s.top());
            s.pop();
        }
        s.pop();
        while(!st.empty())
        {
            s.push(st.top());
            st.pop();
        }
    }
};
