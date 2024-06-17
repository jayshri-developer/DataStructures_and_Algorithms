#define ll long long
class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long long start = 0;
        long long  end = sqrt(c);
        

        while(start <= end)
        {
            long long ans = (start * start) + (end * end);
            // cout<<ans;
            if(ans < c)
            {
                start++;
            }
            else if(ans > c)
            {
                end--;
            }
            else
            {
                 return true;
            }
        }
        return false;
    }
};