class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        vector<vector<int>> result;

        for(int i = 0 ; i < nums.size(); i++)
        {
            int j = i+1;
            int k = nums.size() -1;
            while(j < k)
            {
                int sum = 0;
                sum = nums[i] + nums[j] + nums[k];
                if(sum == 0)
                {
                    ans.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(sum < 0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }

        for(auto it : ans)
        {
            result.push_back(it);
        }

        return result;
    }
};

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]