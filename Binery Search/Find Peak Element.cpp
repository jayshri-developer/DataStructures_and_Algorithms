// Approach 1
// leetcode link: https://leetcode.com/problems/find-peak-element/
// TC: O(log N)

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int mid;

        while(start < end)
        {
            mid = (start + end) /2;
             if(nums[mid] < nums[mid+1])
             {
                 start = mid+1;
             }
             else
             {
                 end = mid;
             }
        }
        return start;
    }
};