// Approach 1
//GFG link: https://leetcode.com/problems/find-lucky-integer-in-an-array/
// TC: O(N)

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;

        unordered_map<int, int> mp;

        for(auto k : arr)
        {
            mp[k]++;
        }

        for(auto k : mp)
        {
            if(k.first == k.second)
            {
                ans = max(ans, k.first);
            }
        }
        return ans;
    }
};
