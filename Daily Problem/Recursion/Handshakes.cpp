// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/handshakes1303/1
// TC: O(N)

class Solution{
public:
    
    int helper(int x)
    {
        if(x == 0 || x == 1)
        {
            return 1;
        }
        
        int result = 0;
        
        for(int i =0; i< x; i++)
        {
            result += helper(i) * helper(x-i-1);
        }
        return result;
    }
    
    int count(int N){
        // code here
        int res = helper(N/2);
        return res;
    }
};
