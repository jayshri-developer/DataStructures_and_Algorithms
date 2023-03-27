// link:- https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
// TC:-O(4^N)
// SC:- O(n * 4 ^n)
// approch 1

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

// approch 2

class Solution {
public:

    void helper(int n, string digits, string curr, int index, unordered_map<char, vector<char>> mp, vector<string> &ans)
    {
        if(index == n)
        {
            ans.push_back(curr);
            return;
        }
       for(auto c: mp[digits[index]])
       {
           helper(n, digits, curr+c, index+1, mp, ans);
       }
    }

    vector<string> letterCombinations(string digits) {
        unordered_map<char, vector<char>> mp;
        
        mp['2'] = {'a', 'b', 'c'};
        mp['3'] = { 'd', 'e', 'f'};
        mp['4'] = {'g','h','i'};
        mp['5'] = {'j', 'k', 'l'};
        mp['6'] = {'m', 'n', 'o'};
        mp['7'] = {'p', 'q', 'r', 's'};
        mp['8'] = {'t', 'u', 'v'};
        mp['9'] = {'w', 'x','y', 'z'};

        if(digits == "")
        {
            return {};
        }
        
        vector<string> ans;
        int N= digits.size();
        helper(N, digits, "", 0, mp, ans);
        return ans;
    }
};
