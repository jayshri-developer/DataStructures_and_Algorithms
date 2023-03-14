// PL:- https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1
// TC: O(N)
// SC:- O(N)

class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<int> st;
        
        for(int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            
            if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                st.push(ch);
            }
            else
            {
                if(ch == ')')
                {
                    bool repeat = true;
                    while(st.top() != '(' )
                    {
                        if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                        {
                            repeat = false;
                        }
                        st.pop();
                    }
                    
                    if(repeat == true)
                    {
                        return true;
                    }
                    
                    st.pop();
                }
            }
        }
        return false;
    }
};
