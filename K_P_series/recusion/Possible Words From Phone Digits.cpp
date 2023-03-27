// link:- https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1
// TC:-O(4^N)
// SC:- O(n * 4 ^n)
// approch 1

class Solution
{
    public:
    
    void helper(int a[], int index, int n, vector<string> val, string s, vector<string> &ans)
    {
       if(index == n)
       {
           ans.push_back(s);
           return;
       }
       
       for(auto x: val[a[index]])
       {
           s.push_back(x);
           helper(a, index+1, n, val, s, ans);
           s.pop_back();
       }
    }
    
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        
        vector<string> val = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        vector<string> ans;
        
        helper(a, 0, N, val, "", ans);
        return ans;
    }
};

// approch 2 
// use unordered_map


class Solution
{
    public:
    
    void helper(int n, int a[], string curr, int index, unordered_map<int, vector<char>> mp, vector<string> &ans)
    {
        if(index == n)
        {
            ans.push_back(curr);
            return;
        }
       for(auto c: mp[a[index]])
       {
           helper(n, a, curr+c, index+1, mp, ans);
       }
    }
    
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        unordered_map<int, vector<char>> mp;
        
        mp[2] = {'a', 'b', 'c'};
        mp[3] = { 'd', 'e', 'f'};
        mp[4] = {'g','h','i'};
        mp[5] = {'j', 'k', 'l'};
        mp[6] = {'m', 'n', 'o'};
        mp[7] = {'p', 'q', 'r', 's'};
        mp[8] = {'t', 'u', 'v'};
        mp[9] = {'w', 'x','y', 'z'};
        
        vector<string> ans;
        helper(N, a, "", 0, mp, ans);
        return ans;
    }
};


// approch 3 
// use unordered_map  given input inform of string

class Solution {
public:

    void helper(int n, string digits, string curr, int index, unordered_map<char, vector<char>> mp, vector<string> &ans)
    {
        if(index == n)
        {
            ans.push_back(curr);
            return;
        }
       for(auto c: mp[digits[index]])
       {
           helper(n, digits, curr+c, index+1, mp, ans);
       }
    }

    vector<string> letterCombinations(string digits) {
        unordered_map<char, vector<char>> mp;
        
        mp['2'] = {'a', 'b', 'c'};
        mp['3'] = { 'd', 'e', 'f'};
        mp['4'] = {'g','h','i'};
        mp['5'] = {'j', 'k', 'l'};
        mp['6'] = {'m', 'n', 'o'};
        mp['7'] = {'p', 'q', 'r', 's'};
        mp['8'] = {'t', 'u', 'v'};
        mp['9'] = {'w', 'x','y', 'z'};

        if(digits == "")
        {
            return {};
        }
        
        vector<string> ans;
        int N= digits.size();
        helper(N, digits, "", 0, mp, ans);
        return ans;
    }
};
