// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1
// TC: O(N)

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
         int start=0;
        int end=n-1;

        int mid=(end+start)/2;

        while(start <= end)
        {
            if(arr[mid] == k) 
            {
                return mid;
            }

            else if(arr[mid] > k)
            {
                end=mid-1;
            }

            else 
            {
                start=mid+1;
            }

            mid= (end+start)/2;
        }
        return -1;
    }
};


// Approach 2 [Recursion]
//GFG link: https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1
// TC: O(N)

class Solution {
  public:
  int index = -1;
  void helper(int arr[], int start, int end, int k)
  {
      if(start < end)
      {
          int mid = (start+end) /2;
          helper(arr, start, mid, k);
          helper(arr, mid+1, end, k);
      }
      else
      {
          if(arr[end] == k)
          {
              index = end;
          }
      }
  }
  
    int binarysearch(int arr[], int n, int k) {
        // code here
        helper(arr, 0, n-1, k);
        return index;
    }
};
