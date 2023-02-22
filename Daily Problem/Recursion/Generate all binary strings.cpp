// Approach 1 (recursion)
//gfg link: https://practice.geeksforgeeks.org/problems/generate-all-binary-strings/1 
// TC: 

class Solution{
public:

    void helper(int num, string s)
    {
        if(num == 0)
        {
            cout<<s<<" ";
            return;
        }
        
        helper(num-1, s+'0');
        
        if(s.size() == 0 || s.back() != '1')
        {
            helper(num-1, s+'1');
        }
    }
    
    void generateBinaryStrings(int& num){
        //Write your code
        helper(num, "");
        return;
    }
};
