// Approach 1
// leetcode link: https://leetcode.com/problems/sqrtx/
// TC: O(log N)

class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans;
		while(s <= e)
        {
			long long int mid = s + (e-s)/2;
			if(mid * mid == x)
            {
                ans = mid; 
                break;
            }
			else if(mid * mid < x)
            {
                s = mid + 1;
            }
			else
            {
                e = mid - 1;
            }
		}
		return ans;
    }
};