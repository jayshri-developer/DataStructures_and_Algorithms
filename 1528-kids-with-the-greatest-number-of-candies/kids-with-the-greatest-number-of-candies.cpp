class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> ans;
        int maxi = INT_MIN;

        for(int i = 0; i < candies.size(); i++)
        {
            maxi = max(maxi, candies[i]);
        }
        
        for(int i = 0; i < candies.size(); i++)
        {
            int ele = 0;
            ele = candies[i] + extraCandies;
            if(ele >= maxi)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }

        return ans;
    }
};