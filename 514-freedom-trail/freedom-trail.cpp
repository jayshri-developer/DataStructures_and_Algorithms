class Solution {
public:
    int memo(string ring, string key, int start, int n, int m, int ki, vector<vector<int>> & dp){
        
        if(start >=n || ki>= m) return 0; 
        if(dp[ki][start]!= -1)return dp[ki][start]; 
        int i=0; 
        int res = INT_MAX; 
        for(int i=start;i<n+start; i++){
            if(ring[i%n] == key[ki]){
                int add = min(abs(i%n-start), abs(n- abs(i%n-start))); 
                res = min( add+ memo(ring,key, i%n, n,m,ki+1, dp), res); 
                
            }
        }
        return dp[ki][start] = res ; 
        
    } 
    
    int findRotateSteps(string ring, string key) {
        
        int n = ring.size() ;
        int m = key.size(); 
        vector<vector <int>> dp(m+1,vector <int> (n+1, -1)) ;
        return memo(ring, key, 0, n, m, 0, dp) +key.size(); 
    }
};