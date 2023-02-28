// Approach 1
//GFG link:  https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
// TC: O(N! * n)


class Solution
{
	public:
	    
	    void util(string s, int start, int end, vector<string> &ans)
	    {
    	    if(start == end)
    	    {
    	        ans.push_back(s);
    	        return;
    	    }
    	    
    	    for(int k = start; k <= end; k++)
    	    {
    	         if(k > start && s[k] == s[k-1])  //skip diblicate
    	         {
    	             continue;
    	         }
        	     swap(s[start],s[k]);
        	     util(s, start+1, end, ans);
        	     swap(s[start],s[k]);
    	    }
    	}
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> ans;
		    util(S, 0, S.size()-1, ans);
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};
