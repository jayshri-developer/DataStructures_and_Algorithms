class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        int n = nums.size();
        int ans = 0;

        for(int left = 0, right = 0; right < n; right++)
        {
            mp[nums[right]]++;

            if(mp[nums[right]] > k)
            {
                while(nums[left] != nums[right])
                {
                    mp[nums[left]]--;
                    left++;
                }
                mp[nums[left]]--;
                left++;
            }
            ans = max(ans, right-left+1);
        }
        return ans ;
    }
};