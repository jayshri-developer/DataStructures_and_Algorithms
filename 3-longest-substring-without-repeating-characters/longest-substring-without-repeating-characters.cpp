class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> set;
        int start = 0;
        int end = 0;
        int n = s.size();
        int ans = 0;

        while(start < n && end < n)
        {
            if(set.find(s[end]) != set.end())
            {
                set.erase(s[start]);
                start++;
            }
            else
            {
                set.insert(s[end]);
                end++;
                ans = max(ans, end- start);
            }
        }
        return ans;
    }
};