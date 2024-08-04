class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        
        // int n = pick.size();
        vector<unordered_map<int,int>>freq(n);
        for(int i=0;i<pick.size();++i)
            freq[pick[i][0]][pick[i][1]]++;
        
        int ans=0;
        for(int i=0;i<n;++i)
        {
            for(auto it:freq[i]){
                int x=it.second;
                if(x>i){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};