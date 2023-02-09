// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1
// TC: O(N)

class Solution{
public:
    bool isLucky(int n) {
        // code here
        for(int i = 2; i <= n; i++)
        {
            if(n % i == 0)
            {
                return false;
            }
            
            n = n- n / i;
        }
        return true;
    }
};


// Approach 2
//GFG link: https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1
// TC: O(N)


class Solution{
public:
    
    bool helper(int n, int counter)
    {
      if(counter > n)
      {
          return true;
      }
      if(n % counter == 0)
      {
          return false;
      }
      
      n = n - (n/counter);
      return helper(n, counter + 1);
      
    }
    
    bool isLucky(int n) {
        // code here
        return helper(n, 2);
    }
};