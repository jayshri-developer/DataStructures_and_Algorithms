// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/decode-the-string2444/1?page=1
// TC: O(N)

class Solution{
public:
    string helper(string s, int &index)
    {
        string ans = "";
        for(; index < s.size() and s[index] != ']'; index ++)
        {
            if(isdigit(s[index]))
            {
                int num = 0;
                while(isdigit(s[index]))
                {
                    num = s[index] - '0' + num * 10;
                    index++;
                }
                
                index++;
                auto ret = helper(s, index);
                for(int i = 0; i<num; i++)
                {
                    ans = ans + ret;
                }
            }
            else
            {
                ans = ans + s[index];
            }
        }
        return ans;
    }
    
    string decodedString(string s){
        // code here
        int index = 0;
        return helper(s, index);
    }
};
