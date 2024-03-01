class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;

        int start = 0;
        int end = 0;
        int n = s.size();
        int ans = 0;

        while(start < n && end < n)
        {
            if(st.find(s[end]) != st.end())
            {
                st.erase(s[start]);
                start++;
            }
            else
            {
                st.insert(s[end]);
                end++;
                ans = max(ans, end-start);
            }
        }
        return ans;
    }
};