// Approch 1
// PL:- https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
// tc:- o(n)
// sc:- 0(1)



// Approch 2
// PL:- https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
// tc:- o(n)
// sc:- 0(n)

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        unordered_map<int, int> mp;
        
        for(int i = 0; i < size; i++)
        {
            mp[a[i]]++;
        }
        
        for(int j = 0; j < size; j++)
        {
            if( mp[a[j]] > size/2)
            {
                return a[j];
            }
        }
        return -1;
        
    }
};



