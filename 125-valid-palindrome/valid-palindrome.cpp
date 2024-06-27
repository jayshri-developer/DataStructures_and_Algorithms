class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> st;
        string  ans = "";

        for(int i = 0; i < s.size(); i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                ans.push_back(tolower(s[i])); 
            }
            else
            {
                continue;
            }
        }
    

        // cout<<ans<<"-->";
        string result = ans;
        reverse(ans.begin(), ans.end());
        if(ans == result)
        {
            return true;
        }

        return false;
    }
};



