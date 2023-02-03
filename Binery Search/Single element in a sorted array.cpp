// Approach 1
// leetcode link: https://leetcode.com/problems/median-of-two-sorted-arrays/
// TC: O(log N)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if (nums.size()==0)
        {
            return nums[0];
        }
		if (nums.size()==1)
        { 
            return nums[0];
        }
		int start = 0;
        int end = nums.size()-1;
		while(start <= end)
        {
			int mid = (start + end)/2;
			if(mid % 2)
            {
				if(nums[mid] == nums[mid-1])
                {
					start = mid + 1;
				}
				else
                {
					end = mid - 1;
				}
			}
			else
            {
				if(nums[mid] == nums[mid+1]){
					start = mid + 1;
				}
				else 
                {
					end = mid - 1;
				}
			}

		}
		return nums[start];
    }
};