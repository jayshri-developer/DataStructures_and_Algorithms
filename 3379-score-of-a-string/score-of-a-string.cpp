class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for(int i = 0; i < s.size()-1; i++)
        {
            ans = ans + abs(s[i] - s[i+1]);
        }
        return ans ;
    }
};
//   h - e
// // |104 - 101| + |101 - 108| + |108 - 108| + |108 - 111|