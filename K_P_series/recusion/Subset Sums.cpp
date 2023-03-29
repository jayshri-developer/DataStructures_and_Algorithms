// link:- https://practice.geeksforgeeks.org/problems/subset-sums2234/1
// tc:- o(2^n)
// sc:- o(2^n)

class Solution
{
public:
    void helper(vector<int> arr, int n, int index, int sum, vector<int> &ans)
    {
        
        if(index == n)
        {
            ans.push_back(sum);
            return;
        }
        // include 
        helper(arr, n, index+1, sum+arr[index], ans);
        // exclude
        helper(arr, n, index+1, sum, ans);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        
        helper(arr, N, 0, 0, ans);
        return ans;
    }
};
