// link:- https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// TC:-O(N)
// SC:- O(n)

class Solution{
public:	
	
	bool helper(string s, int st, int e)
	{
    	if(st >= e ) 
    	{
    	    return true;
    	}
    	
    	if(s[st] != s[e]) 
    	{
    	    return false;
    	}
    		
    	return helper(s, st+1, e-1);
    	
    }
	    
	int isPalindrome(string S)
	{
	    // Your code goes here
	    return helper(S, 0, S.size()-1);
	    
	}

};
