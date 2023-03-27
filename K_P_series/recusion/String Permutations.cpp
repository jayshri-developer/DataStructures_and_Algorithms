// link:- https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1
// tc:- o(n! * n)
// sc:- o(n! * n)

class Solution{
    public:
    //Complete this function
    
    void helper(string s, int index, int n, vector<string> &ans)
    {
        
        if(index == n-1)
        {
            ans.push_back(s);
            return;
        }
        for(int i = index; i<n; i++)
        {
            swap(s[index] , s[i]);
            helper(s, index+1, n, ans);
            swap(s[index], s[i]);
        }
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        
        helper(S, 0, S.size(), ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};


// want to remove dublicate elemnt too add condition in for loop
// link :- https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
// 
// 
// 

class Solution
{
	public:
	
	    void helper(string s, int index, int n, vector<string> &ans)
	    {
	        if(index == n-1)
	        {
	            ans.push_back(s);
	            return;
	        }
	        for(int i =index; i<n; i++)
	        {
	            if(i > index && s[i] == s[i-1])
    	         {
    	             continue;
    	         }
	            swap(s[index], s[i]);
	            helper(s, index+1, n, ans);
	            swap(s[index], s[i]);
	        }
	        
	    }
	    
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> ans;
		    
		    helper(S, 0, S.size(), ans);
		    sort(ans.begin(), ans.end());
		    
		    return ans;
		}
};

// number permitution
// link:- https://leetcode.com/problems/permutations/ 
// 
// 
// 
class Solution {
public:

    void helper(vector<int> nums, int index, vector<vector<int>> &ans)
    {
        if(index == nums.size() -1)
        {
            ans.push_back(nums);
            return;
        }
        for(int i = index; i < nums.size(); i++)
        {
            swap(nums[i], nums[index]);
            helper(nums, index+1, ans);
            swap(nums[i], nums[index]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(nums, 0, ans);
        return ans;
    }
};

//  want to remove dublicate elemnt too add condition in for loop
// link :- https://leetcode.com/problems/permutations-ii/description/

class Solution {
public:
    void helper(vector<int> nums, vector<vector<int>>& result, int index) {
        if (index == nums.size()) 
        {
            result.emplace_back(nums);
        }

        for (int i = index; i < nums.size(); i++) 
        {
            if (i != index && nums[i] == nums[index]) 
            {
                continue;
            }
            swap(nums[i], nums[index]);
            helper(nums, result, index + 1);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        helper(nums, result, 0);
        return result;
    }
};
