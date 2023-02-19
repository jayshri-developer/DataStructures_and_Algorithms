// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1
// TC: o(2^k)


class Solution {
public:
void solve(int K, int N, vector<vector<int>> &ans, vector<int> &ds, int num){
if(K==0){
if(N==0){
ans.push_back(ds);
}
return;
}

if(num>N) return;

for(int i=num; i<=9; i++){
ds.push_back(i);
solve(K-1,N-i,ans,ds,i+1);
ds.pop_back();
}
}
vector<vector<int>> combinationSum(int K, int N) {
vector<vector<int>> ans;
vector<int> ds;
solve(K,N,ans,ds,1);
return ans;
}
};