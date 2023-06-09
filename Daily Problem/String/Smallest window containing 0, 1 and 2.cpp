// PL:- https://practice.geeksforgeeks.org/problems/d6e88f06b273a60ae83992314ac514f71841a27d/1
// TC: O(N)
// SC:- O(1)

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int res = INT_MAX;
    
        bool zero = false;
        bool one = false;
        bool two = false;
        
        int zero_index;
        int one_index;
        int two_index;
        
        for(int i = 0 ; i < S.size(); i++)
        {
            if(S[i] == '0')
            {
                zero = true;
                zero_index = i;
            }
            
            else if(S[i] == '1')
            {
                one = true;
                one_index = i;
            }
            
            else if(S[i] == '2')
            {
                two = true;
                two_index = i;
            }
            
            if(zero && one && two)
            {
                res = min(res,
                            max({zero_index, one_index, two_index}) - 
                            min({zero_index, one_index, two_index}));
            }
        }
        
        if(res == INT_MAX)
        {
            return -1;
        }
        
        return res+1;
    }
};
