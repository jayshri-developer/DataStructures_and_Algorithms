class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> st;

        for(int i = 0; i < word.size(); i++)
        {
            st.insert(word[i]);
        }
        
        unordered_map<char, int> mp;
        for(auto it : st)
        {
            // cout<<it<<endl;
            mp[tolower(it)]++;
        }
        int count = 0;
        for(auto it: mp)
        {
            // cout<<it.second<<endl;
            if(it.second == 2)
            {
                count++;
            }
        }
        return count;
    }
};