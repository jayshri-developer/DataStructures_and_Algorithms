// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/merge-sort/1
// TC: O(N log N)


class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
         // Your code here
         int i = l ;        // starting index of left half of arr
        int j = mid + 1;   // starting index of right half of arr
        int f = l ;        // index used to transfer elements in temporary array
        int temp[100000] ; // temporary array

        //storing elements in the temporary array in a sorted manner//

        while (i <= mid && j <= r) {
            if (arr[i] < arr[j]) {
                temp[f] = arr[i]  ;
                i++ ;
            }
            else {
                temp[f] = arr[j]  ;
                j++ ;
            }
            f++ ;
        }

        // if elements on the left half are still left //

        if (i > mid) 
        {
            while (j <= r) {
                temp[f] = arr[j]  ;
                f++ ; j++ ;
            }
        }
        else 
        {
            //  if elements on the right half are still left //
            while (i <= mid) {
                temp[f] = arr[i]  ;
                f++ ; i++ ;
            }
        }

        // transfering all elements from temporary to arr //
        for (int f = l ; f <= r; f++) {
            arr[f] = temp[f] ;
        }
    }
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if (l < r) {
            int mid = (l + r) / 2 ;
            mergeSort(arr, l, mid)  ;  // left half
            mergeSort(arr, mid + 1, r)  ; // right half
            merge(arr, l, mid, r)  ;  // merging sorted halves
        }
    }
};
