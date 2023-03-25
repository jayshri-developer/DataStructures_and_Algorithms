// Approach 1
//GFG link:  https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// TC: O(N)

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

// Approach 2
//GFG link: https://leetcode.com/problems/reverse-string/
// TC: O(N)

class Solution {
public:
    void helper(vector<char>& s, int start, int end)
    {
        if(start >= end)
        {
            return;
        }

        swap(s[start], s[end]);
        helper(s, start+1, end-1);
    }
    void reverseString(vector<char>& s) {
        helper(s, 0, s.size()-1);
    }
};
