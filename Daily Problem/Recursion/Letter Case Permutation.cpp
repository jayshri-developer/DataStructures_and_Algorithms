// link:- https://leetcode.com/problems/letter-case-permutation/description/
// tc:- o(n!)

class Solution {
public:

    void helper(string s, int index, string curr, vector<string> &ans)
    {
        if(index == s.size())
        {
            ans.push_back(curr);
            return;
        }
       
        if(isdigit(s[index]))
        { // case 1
            curr.push_back(s[index]);
            helper(s, index+1, curr, ans);
        }
        else
        { // case 2
            //sub case 1, considering lower case
            string c1 = curr;
            c1.push_back(tolower(s[index]));
            helper(s, index+1, c1, ans);
            
            //sub case 2, considering upper case
            string c2 = curr;
            c2.push_back(toupper(s[index]));
            helper(s, index+1, c2, ans);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        helper(s, 0, "", ans);
        return ans;
    }
};
