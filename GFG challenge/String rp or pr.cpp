// TC:- O(|S|)
// SC:- O(|S|)

// link:- https://practice.geeksforgeeks.org/problems/d25f415de2ff3e02134de03e17ad019d723ab2e9/1

class Solution{   
public:
    long long solve(int X,int Y,string S)
    {
      stack<char> st;
      int n = S.size();
      long long ans = 0;
      for(int i = 0; i<n; i++)
      {
          if(S[i]!='r' && S[i]!='p')
          {
              if(!st.empty())
              {
                  char ch=st.top();
                  int countr=0,countp=0;
                  while(!st.empty())
                  {
                      if(st.top()=='r') countr++;
                      else countp++;
                      st.pop();
                  }
                  if(ch=='r') ans+=X*min(countr,countp);
                  if(ch=='p') ans+=Y*min(countr,countp);
              }
              continue;
          }
          
          if(st.empty()) st.push(S[i]);
          else if(X>=Y) // removing pr is better than removing rp
          {
              if(st.top()=='p' && S[i]=='r')
              {
                  ans+=X;
                  st.pop();
              }
              else
              {
                  st.push(S[i]);
              }
          }
          else  // X>Y -> removing rp is better than removing pr
          {
              if(st.top()=='r' && S[i]=='p')
              {
                  ans+=Y;
                  st.pop();
              }
              else
              {
                  st.push(S[i]);
              }
          }
      }
      if(!st.empty())
      {
          char ch=st.top();
          int countr=0,countp=0;
          while(!st.empty())
          {
              if(st.top()=='r') countr++;
              else countp++;
              st.pop();
          }
          if(ch=='r') ans+=X*min(countr,countp);
          if(ch=='p') ans+=Y*min(countr,countp);
      }
      return ans;
    }
};
