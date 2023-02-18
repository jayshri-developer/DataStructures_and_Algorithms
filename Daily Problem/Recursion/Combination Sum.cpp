// Approach 1 (recursion)
//leetcode link: https://practice.geeksforgeeks.org/problems/combination-sum-1587115620/1 
// TC: O(X^2  *  2^N)

class Solution {
  public:
  
  void helper(int index, vector<int> a, int b, vector<int> ans, vector<vector<int>> &result)
  {
      if(index == a.size())
      {
          if(b==0)
          {
              result.push_back(ans);
          }
          
          return;
      }
      if(a[index] <= b)
      {
          ans.push_back(a[index]);
          helper(index, a, b-a[index], ans, result);
          ans.pop_back();
      }
      
      helper(index+1, a, b, ans, result);
  }
  
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>> result;
        vector<int> ans;
        sort(A.begin(), A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        // unique(A.begin(), A.end());
        helper(0, A, B, ans, result);
        return result;
    }
};

// Approach 1 (recursion)
// leetcode link:- https://leetcode.com/problems/combination-sum/description/ 

class Solution {
public:
    void findCombination(int idx, vector<int> candidates, int target, vector<int> ans, vector<vector<int>> &result){
        // Base condition
        if(idx == candidates.size())
        {
            if(target == 0){
                result.push_back(ans);
            }
            return;
        }
        // Take
        if(candidates[idx] <= target){
            ans.push_back(candidates[idx]);
            findCombination(idx, candidates, target-candidates[idx], ans, result);
            ans.pop_back();
        }
        // Not-take
        findCombination(idx+1, candidates, target, ans, result);

        return;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        findCombination(0, candidates, target, ans, result);
        return result;
    }
};
