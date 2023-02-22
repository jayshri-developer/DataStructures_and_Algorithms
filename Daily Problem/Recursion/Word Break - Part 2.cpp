// Approach 1 (recursion)
//gfg link:  https://practice.geeksforgeeks.org/problems/word-break-part-23249/1
// TC: o(4^ n*m)

class Solution{
public:
   vector<string> ans;
   void solve(vector<string>& dict, string s, int n, string psf)
   {
       if(s.length() == 0)
       {
           psf.erase(psf.begin() + psf.length() - 1);
           ans.push_back(psf);
           return;
       }
       for(int i = 0 ; i < s.length(); i++)
       {
           string left_part = s.substr(0,i + 1);
           if(find(dict.begin(),dict.end(),left_part) != dict.end())
           {
               string right_part = s.substr(i + 1);
               solve(dict,right_part,n,psf + left_part + " ");
           }
       }
   }
   vector<string> wordBreak(int n, vector<string>& dict, string s)
   {
      string psf;
      solve(dict,s,n,psf);
      return ans;
   }
};
