// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/largest-number-in-k-swaps-1587115620/1
// TC: O(N)

class Solution
{
    public:
    string best;
    void helper(int index, string str, int k)
    {
        best = max(best, str);
        
        if(index >= str.size() || k <= 0)
        {
            return;
        }
        
        for(int i = index+1; i<str.size(); i++)
        {
            if(str[i] > str[index])
            {
                swap(str[i], str[index]);
                helper(index+1, str, k-1);
                swap(str[i], str[index]);
            }
        }
        
        helper(index+1, str, k);
    }
    //Function to find the largest number after k swaps.
    string findMaximumNum(string str, int k)
    {
       // code here.
       best = str;
       helper(0, str, k);
       return best;
    }
};