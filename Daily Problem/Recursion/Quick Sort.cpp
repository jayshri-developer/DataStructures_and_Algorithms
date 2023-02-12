// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/quick-sort/1
// TC: O(N * log N)

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low == 1 && high ==1)
        {
            return;
        }
        // code here
        if(low < high)
        {
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot -1);
            quickSort(arr, pivot + 1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot = arr[low];
       int i = low;
       int j = high;
       
       while(i < j)
       {
           while(arr[i] <= pivot && i <= high-1)
           {
               i++;
           }
           while(arr[j] >= pivot && j >= low)
           {
               j--;
           }
           if(i < j)
           {
               swap( arr[i], arr[j]);
           }
       }
       swap(arr[j], arr[low]);
       return j;
    }
};


