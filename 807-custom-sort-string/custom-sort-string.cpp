class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char, int> mp;
        string ans = "";

        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        for(int i = 0; i < order.size(); i++)
        {
            if(mp.find(order[i]) != mp.end())
            {
                ans.append(mp[order[i]], order[i]);
                mp.erase(order[i]);
            }
        }

        for(auto it : mp)
        {
            ans.append(it.second, it.first);
        }
        return ans;

    }
};