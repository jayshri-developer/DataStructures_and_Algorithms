class Solution {
public:
    int tribonacci(int n) {

            int t0 = 0;
            int t1 = 1;
            int t2 = 1;
            int pre = 0;
            int next = 0;
            if(n == 3)
            {
                return t0+t1+t2;
            }
            else if(n == 1)
            {
                return t1;
            }
            else if(n == 2)
            {
                return t0+t1;
            }
        while(n > 3)
        {
            pre = t0+t1+t2;
            // cout<<pre<<endl;
            t0 = t1;
            t1 = t2;
            t2 = pre;
            next = t0+t1+t2;
            // cout<<next<<endl;

            n--;
        }
        
        return next;
    }
};