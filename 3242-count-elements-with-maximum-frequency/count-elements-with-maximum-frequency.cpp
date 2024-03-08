class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        
        int ans = INT_MIN;
        for(auto it : mp)
        {
            ans = max(ans, it.second);
        }
        
        int result = 0;
        
        for(auto it : mp)
        {
            if(it.second == ans)
            {
                result = result + it.second;
            }
        }
        
        return result;
    }
};

// [1,2,2,3,1,4]

// 1-2
// 2-2
// 3-1
// 4-1