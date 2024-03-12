class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size(); j++)
            {
                if(i != j)
                {
                    int sum = nums[i] + nums[j];
                    if(sum == target)
                    {
                        ans.push_back(i);
                        ans.push_back(j);
                        // cout<<"hello break plz"<<i<<"->"<<j<<":::";
                        // break;
                        return ans;
                    }
                }
            }
        }
        return {};
    }
};