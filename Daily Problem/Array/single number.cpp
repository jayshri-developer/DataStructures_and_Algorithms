// Approch 1
// PL:- https://leetcode.com/problems/single-number/
// tc:- o(n)
// sc:- 0(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // 0 ^ n = n
        // n ^ n = 0s
        int ans = 0;
        for(int i = 0; i< nums.size(); i++)
        {
            ans = ans ^ nums[i];
            
        }
        return ans;
    }
};

// Approch 2
// tc:- o(n)
// sc:- o(n)


class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int, int> mp;
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }

        for(int j = 0; j < n; j++)
        {
            if(mp[nums[j]] == 1 )
            {
                return nums[j];
            }
        }
        return -1;
    }
};

// Approch 3
// tc:- o(n logn )
// sc:- o(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int n = nums.size();
        if(n == 0)
        {
            return 0;
        } 
        sort(nums.begin(), nums.end());

        for(int i = 1; i < n; i= i+2)
        {
            if(nums[i-1] != nums[i])
            {
                return nums[i-1];
            }
            // return nums[i];
        }
        return nums[n-1];
    }
};
