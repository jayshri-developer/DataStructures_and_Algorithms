// Approach 1
//leetcode link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
// TC: 

class Solution {
public:
    void helper(string digits, string s, vector<string> &ans)
    {
        vector<string> v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        if(digits.size() == 0)
        {
            ans.push_back(s);
            return ;
        }

        string str = v[digits[0] - '0'];
        digits.erase(digits.begin());

        for(int i =0; i< str.size(); i++)
        {
            helper(digits, s + str[i], ans);
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits == "")
        {
            return {};
        }
       vector<string> ans;
       string s = "";
       helper(digits, s, ans);
       return ans;
    }
};
