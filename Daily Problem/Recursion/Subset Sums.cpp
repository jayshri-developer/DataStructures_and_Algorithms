// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/subset-sums2234/1
// TC: O(2^N log 2^n)

class Solution
{
public:
   void func(int ind, int sum,vector<int> &arr, int N, vector<int> &sumSubset) {
        if(ind == N) {
            sumSubset.push_back(sum); 
            return; 
        }
        
        // pick the element 
        func(ind + 1, sum + arr[ind], arr, N, sumSubset); 
        
        // Do-not pick the element
        func(ind + 1, sum, arr, N, sumSubset);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sumSubset;
        sort(sumSubset.begin(), sumSubset.end());
        func(0, 0, arr, N, sumSubset);
        // sort(sumSubset.begin(), sumSubset.end());
        return sumSubset;
    }
};
