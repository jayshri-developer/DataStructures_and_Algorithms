// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/print-all-lcs-sequences3413/1
// TC: O(n^2 m^2)

class Solution
{
	public:
	    set<string> ans;
	   
	   void print_lcs(int row ,int col, vector<vector<int>> &dp, string s, string t, string cur, int lcs)
	   {
	       if(cur.size() == lcs)
	       {
	           reverse(cur.begin(), cur.end());
	           ans.insert(cur);
	           return;
	       }
	       
	       if(row == 0 || col == 0)
	       {
	           //cout<<cur<<endl;
	           return;
	       }
	       //cout<<cur<<+endl;
	       for(int i =row;i>=1;i--)
	       {
		      for(int j =col;j>=1;j--)
		      {
		          if(s[i-1] == t[j-1])
		          {
		              print_lcs(i-1,j-1,dp,s,t,cur+s[i-1],lcs);
		          }
		      }
		  }
 
	   }
 
		vector<string> all_longest_common_subsequences(string s, string t)
		{
		    // Code here
		  //  ans.clear();
		    int n = s.size();
		    int m = t.size();
		    vector<vector<int>> dp(n+1, vector<int>(m+1));
		    
		    for(int i =1;i<=n;i++){
		        for(int j =1;j<=m;j++){
		            if(s[i-1] == t[j-1]){
		                dp[i][j] = dp[i-1][j-1] + 1;
		            }
		            else{
		                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		            }
		        }
		    }
 
 
		  string cur;
		  print_lcs(n,m,dp,s,t,cur,dp[n][m]);
		    vector<string> words;
		    for(auto it:ans)words.push_back(it);
		    return words;
		}
};
