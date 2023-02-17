// Approach 1
//GFG link:  https://practice.geeksforgeeks.org/problems/power-set4302/1
// TC: O(N * 2^n)

class Solution{
	public:
	
	    void helper(string s, string op, int index, vector<string> &ans)
	    {
	       if(index >= s.size())
	       {
	           if(op.size() >= 1)
	           {
	              ans.push_back(op); 
	           }
	           return;
	       }
	       
	       op.push_back(s[index]);
	       helper(s, op, index+1, ans);
	       op.pop_back();
	       helper(s, op, index+1, ans);
	    }
	    
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    string op = "";
		    helper(s, op, 0, ans);
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};
