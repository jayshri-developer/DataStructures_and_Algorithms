// Approach 1
// leetcode link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// TC: O(log N)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);

        int s = 0;
        int e = nums.size()-1;

        while(s <= e)
        {
            int mid = (e+s)/2;
            if(nums[mid] == target)
            {
                ans[0] = mid;
                e = mid-1; // shrinking search space from right to get the first position
            }
            else if(nums[mid] < target)
            {
                s = mid+1;
            } 
            else 
            { 
                e = mid-1;
            }
        }

        s = 0;
        e = nums.size()-1;

        while(s <= e){
        int mid = (e+s)/2;
        if(nums[mid] == target)
        {
            ans[1] = mid;
            s = mid+1; // shrinking search space from left to get the last position
        }
        else if(nums[mid] < target) 
        {
            s = mid+1;
        }
        else 
        {
            e = mid-1;
        }
        }
        return ans;
    }
};

==========================================================================================

// Approach 2
//GFG link: https://practice.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x0849/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// TC: O(N)

class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        int num1 = -1;
        int num2 = -1;
        
        for(int i =0; i<v.size(); i++)
        {
            if(v[i] == x)
            {
                num1 = i;
                break;
            }
        }
        
        for(int j = v.size()-1; j>=0; j--)
        {
            if(v[j] == x)
            {
                num2 = j;
                break;
            }
        }
        
        pair<long, long> p;
        p = make_pair(num1, num2);
        return p;
    }
};


// leetcode link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// TC: O(N)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int num1 = -1;
        int num2 = -1;
        vector<int> result;

        for(int i=0; i<nums.size(); i++)
        {
            if (nums[i] == target)
            {
                num1 = i;
                break;
            }
        }

        for(int j=nums.size()-1; j>=0; j--)
        {
            if(nums[j] == target)
            {
                num2 = j;
                break;
            }
        }
        result.push_back(num1);
        result.push_back(num2);
        return result;
    }
};