// Approach 1 (recursion)
//leetcode link: https://leetcode.com/problems/expression-add-operators/description/
// TC: 

class Solution {
public:

    void helper(vector<string> &ans, string num, int target, string exp, int index, int prenum, long long currtotal)
    {
        int n = num.size();
        if(index == n)
        {
            if(currtotal == target)
            {
                ans.push_back(exp);
            }
            return ;
        }

        string currnumstr = "";
        long long currnum = 0;
        for(int i = index; i< n; i++)
        {
            if(i > index && num[index] == '0')
            {
                break;
            }
            currnumstr += num[i];
            currnum = currnum*10+(num[i] - '0');
            if(index == 0)
            {
                helper(ans, num, target, exp+currnumstr, i+1, currnum, currtotal+currnum);
            }
            else
            {
                helper(ans, num, target, exp+"+"+currnumstr, i+1, currnum, currtotal+currnum);
                helper(ans, num, target, exp+"-"+currnumstr, i+1, -currnum, currtotal-currnum);
                helper(ans, num, target, exp+"*"+currnumstr, i+1, prenum*currnum, currtotal-prenum+prenum*currnum);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        helper(ans, num, target, "", 0, 0, 0);
        return ans;
    }
};
