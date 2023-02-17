// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1
// TC: O(N)

// Optimal Solution -> Space:- O(1) | Time:- O(N)

int countWays(int n){
    int first = 1, second = 2;  
    if(n == 1) return 1;
    
    for(int i = 2; i < n; i++){
        int third = (first + second) % 1000000007;
        first = second;
        second = third;
    }
    return second;
}

// Approach 2
// DP -> Top-Down Approach -> Recursive + Memoisation | Space:- O(N) | Time:- O(N)

class Solution{
    public:
    int solve(vector<int>& dp, int n){
        if(n <= 1) return 1;

        if(dp[n] != -1) return dp[n];
        dp[n] = (solve(dp, n - 1) + solve(dp, n - 2)) % 1000000007;
        return dp[n];
    }
    int countWays(int n){
        vector<int> dp(n + 1, -1);
        return solve(dp, n);
    }
};


// Approach 3
// DP -> Bottom-Up Approach -> Tabulation Approach | Space:- O(N) | Time:- O(N)

int countWays(int n){
    vector<int> dp(n + 1);
    dp[0] = dp[1] = 1;
    
    for(int i = 2; i <= n; i++){
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007; 
    }
    return dp[n];
}
