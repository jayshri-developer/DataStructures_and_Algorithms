// Approach 1 (RECURSION)
//GFG link: https://practice.geeksforgeeks.org/problems/reverse-a-stack/1
// TC: O(N)

class Solution{
public:

    void pushatbottom(stack<int> &st, int num)
    {
        if(st.empty())
        {
            st.push(num);
            return;
        }
        
        int n = st.top();
        st.pop();
        
        pushatbottom(st, num);
        
        st.push(n);
    }
    
    void Reverse(stack<int> &St){
        if(St.empty())
        {
            return;
        }
        
        int num = St.top();
        St.pop();
        
        Reverse(St);
        pushatbottom(St, num);
    }
};
