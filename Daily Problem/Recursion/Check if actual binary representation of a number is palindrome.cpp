// Approach 1 [recrsion]
//GFG link: https://practice.geeksforgeeks.org/problems/check-if-actual-binary-representation-of-a-number-is-palindrome0624/1
// TC: O(N)

class Solution{
public:
    
    int helper(long long int n)
    {
        if(n == 0)
        {
            return 1;
        }
        
        vector<int> ans;
        while(n>0)
        {
            ans.push_back(n%2);
            n = n/2;
        }
        
        for(int i =0; i<= ans.size()/2; i++)
        {
            if(ans[i] != ans[ans.size()-i-1])
            {
                return 0;
            }
        }
        return 1;
    }
	
	int binaryPalin (long long int N)
	{
	    // Your Code Here
	    return helper(N);
	}
};
