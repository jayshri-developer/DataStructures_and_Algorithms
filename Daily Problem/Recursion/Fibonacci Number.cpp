// Approach 1
//GFG link: https://leetcode.com/problems/fibonacci-number/ 
// TC: O(N)

class Solution {
public:
    int fib(int n) {
        int first = 0;
        int second = 1;
        if (n == 0){
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        int ans = 0;
        for (int i=2; i<=n; i++)
        {
            ans = first + second;
            //swap
            first = second;
            second = ans;
        }
        return ans;
    }
};

// Approach 2 [recursion]
//GFG link:  https://leetcode.com/problems/fibonacci-number/
// TC: O(2^N)

class Solution {
public:
    int fib(int n) {
        if(n == 0)
        {
            return 0;
        }

        if(n == 1)
        {
            return 1;
        }

        return fib(n-1) + fib(n-2);
    }
};
