// Approach 1 (recursion)
//GFG link: https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1
// TC: O(N)

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int helper(int arr[], int N, int K, int start, int end)
    {
        while( start > end)
        {
            return -1;
        }
        
        
       int mid = (start+ end)/2;
       if(arr[mid] > K)
       {
           helper(arr, N, K, start, mid-1);
       }
       else if(arr[mid] < K)
       {
           helper(arr, N, K, mid+1, end);
       }
       else
       {
           return 1;
       }
    
    }
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       return helper(arr, N, K, 0, N-1);
       
    }
};

// Approach 2
// TC: O(log N)

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       int start = 0;
       int end = N-1;
       
       while(start <= end)
       {
           int mid = (start+ end)/2;
           if(arr[mid] > K)
           {
               end = mid-1;
           }
           else if(arr[mid] < K)
           {
               start = mid+1;
           }
           else
           {
               return 1;
           }
       }
       
       return -1;
       
    }
};
