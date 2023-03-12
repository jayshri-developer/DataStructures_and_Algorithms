// Approach 1
// PL:- https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) 
    {
        // code here
        unordered_map<int,int> m;
       
       int count=0;
       for(int i=0; i<n; i++)
       {
           int result = k-arr[i];
           
           if(m[result])
           {
               count = count+m[result];
           }
           m[arr[i]]++;
       }
       return count;
    }
};
