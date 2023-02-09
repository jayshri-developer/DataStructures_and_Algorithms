// Approach 1
//GFG link: 
// TC: O(log N)

class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
        if(R==0) return 1;

        long ans = power(N,R/2);

        ans = ans * ans % 1000000007;

        if(R % 2==0) return ans;

        return ans * N % 1000000007;
    }

};
