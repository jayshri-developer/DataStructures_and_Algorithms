// Approach 1
// PL:- https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int sum = 0;
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n; i++)
        {
            int result = target - nums[i];
            for(int j = i+1; j < n; j++)
            {
                if(result == nums[j])
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        if(ans.size() == 0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        
        return ans;
    }
};

// approach 2

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++) {
            if(mp.find(target - nums[i]) != mp.end()) {
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                break;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
