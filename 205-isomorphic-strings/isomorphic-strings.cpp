class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size()!=t.size())return false;
        map<char, vector<int>> mp1;
        map<char, vector<int>> mp2;

        for(int i = 0; i < s.size(); i++)
        {
            mp1[s[i]].push_back(i);
        }

        for(int j = 0; j < t.size(); j++)
        {
            mp2[t[j]].push_back(j);
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(mp1[s[i]] != mp2[t[i]])
            {
                return false;
            }
        }
        return true;

    }
};