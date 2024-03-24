class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != i)
            {
                return i;
            }
            else
            {
                count++;
            }
        }
        
        if(count == nums.size())
        {
            return count;
        }
        return 0;
    }
};

// 0 1 3 