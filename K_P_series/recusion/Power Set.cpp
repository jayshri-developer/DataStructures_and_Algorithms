// link:- https://practice.geeksforgeeks.org/problems/power-set4302/1
// TC:-O(N logN * 2^n)
// SC:- O(n * 2^n)

class Solution{
	public:
	    void helper(string s, int index, int n, string str, vector<string> &ans)
	    {
	       //include char
	       if(index == n)
	       {
	           ans.push_back(str);
	           return;
	       }
	       
	       helper(s, index+1, n, str+s[index], ans);
	       //exclude char
	       helper(s, index+1, n, str, ans);
	    }
	    
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    
		    helper(s, 0, s.size(), "", ans);
		    sort(ans.begin(), ans.end());
		    ans.erase(ans.begin());
		    
		    return ans;
		}
};
