// PL:- https://leetcode.com/problems/build-an-array-with-stack-operations/
// TC: O(N)
// SC:- O(N)

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        string ph = "Push";
        string pp = "Pop";
        int num = 1;
        for(int i = 0; i<target.size(); i++)
        {
            while(num != target[i])
            {
                num++;
                ans.push_back(ph);
                ans.push_back(pp);
            }
            ans.push_back(ph);
            num++;
        }
        
        return ans;
    }
};
