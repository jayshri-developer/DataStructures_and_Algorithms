// Approach 1 [recursion]
//GFG link: https://leetcode.com/problems/permutations/
// TC: O(N)

class Solution {
public:
    void solution(vector <vector<int>> &ans,int i,vector <int> &v){
        if(i>=v.size()){
        ans.push_back(v);
        return;
        }
    for(int j=i;j<v.size();j++){
        swap(v[j],v[i]);
        solution(ans,i+1,v);
        swap(v[j],v[i]);
    }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector <vector<int>> ans;
        // vector <int> v;
        solution(ans,0,nums);
        return ans;
    }
};
