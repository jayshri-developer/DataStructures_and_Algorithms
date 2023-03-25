// link:- https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// TC:-O(N)
// SC:- O(n)

void helper(string &str, int start, int end)
{
    if(start > end)
    {
        return;
    }
    
    swap(str[start], str[end]);
    helper(str, start+1, end-1);
}
string reverseWord(string str){
    
  //Your code here
  helper(str, 0, str.size()-1);
  return str;
}
