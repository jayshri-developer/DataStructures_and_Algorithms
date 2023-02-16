// Approach 1
//leetcode link: https://leetcode.com/problems/subsets-ii/ 
// TC: O(2^N)

class Solution {
public:
    void help(int i,vector<vector<int>>&ans,vector<int>v,vector<int>& nums){
        
        if(i==nums.size()){
		
		//check for duplicate elements 
            for(int i=0;i<ans.size();i++){
                if(v==ans[i]){
                    return;
                }
            }
            ans.push_back(v);
            return;
        }
        
        v.push_back(nums[i]);
        help(i+1,ans,v,nums);
        
		//backtraking
        v.pop_back();
        help(i+1,ans,v,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(nums.begin(), nums.end());
        help(0,ans,v,nums);
        return ans;
    }
};


// Approach 2



class Solution {
public:

    void helper(vector<int> nums, int index, vector<int> ans, vector<vector<int>> &result)
    {
        result.push_back(ans);
        for(int i = index; i<nums.size(); i++)
        {
            if(i == index || nums[i] != nums[i-1])
            {
                ans.push_back(nums[i]);
                helper(nums, i+1, ans, result);
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        helper(nums, 0, ans, result);
        return result;
    }
};