class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int oddcount = 0;

        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]%2 == 0)
            {
                oddcount--;
            }
            else
            {
                oddcount++;
            }
        }
        
        if(oddcount > 1)
        {
            return s.size() - oddcount + 1 ;
        }
        return s.size();
    }
};