// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/introduction-to-trees/1
// TC: O(N)

class Solution {
  public:
    int countNodes(int i) {
        // your code here
        int ans = pow(2, i-1);
        return ans;
    }
};

// Approach 2
//GFG link: https://practice.geeksforgeeks.org/problems/introduction-to-trees/1
// TC: O(N)

class Solution {
  public:
    int countNodes(int i) 
    {
        int ans = 1;
        if(i == 1)
        {
            return ans;
        }
        else
        {
            for(int j = 1; j < i; j++)
            {
                ans = ans * 2;
            }
        }
        return ans;
    }
};