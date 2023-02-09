// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// TC: O(N)

string reverseWord(string str){
    
  //Your code here
  reverse(str.begin(), str.end());
  return str;
}


// Approach 2
//GFG link: https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// TC: O(1)

string reverseWord(string str){
    
  //Your code here
  int i =0;
  int j = str.size()-1;
  
  while(i<j)
  {
      swap(str[i++], str(j--));
  }
  return str;
}


// Approach 3
//GFG link: https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// TC: O(N) [Recursion]

void helper(string &str, int i, int j)
{
    if(i>j)
    {
        return;
    }
    
    swap(str[i], str[j]);
    i++;
    j--;
    helper(str, i, j);
}

string reverseWord(string str){
    
  //Your code here
  int i = 0;
  int j = str.size()-1;
  helper(str, i, j);
  return str;
}
