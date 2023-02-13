// Approach 1
//GFG link: https://leetcode.com/problems/contains-duplicate/description/
// TC: O(N)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         set<int> mySet;
    // unordered_set<int> mySet;
    // multiset<int> mySet;
    // unordered_multiset<int> mySet;
    for (auto num: nums) 
    {
        if (mySet.find(num) != mySet.end())
        {
            return true;
        }
        mySet.insert(num);
    }
    return false;
    }
};
