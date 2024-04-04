class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int start = 0;
        int end = n-1;

        while(i < n && end >= i)
        {
            if(nums[i] == 0)
            {
                swap(nums[i], nums[start]);
                i++;
                start++;
            }
            else if( nums[i] == 2)
            {
                swap(nums[i], nums[end]);
                end--;
            }
            else
            {
                i++;
            }
        }
    }
};
