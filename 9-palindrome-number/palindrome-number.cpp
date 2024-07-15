class Solution {
public:
    bool isPalindrome(int x) {
        string str1 = to_string(x);
        string str2= "";

        if(str1[0] == '-')
        {
            return false;
        }
        if(x== 0)
        {
            return true;
        }

        while(x)
        {
            int bit = x % 10;
            x = x /10;
            str2 = str2 + to_string(bit);
        }

        if(str1 == str2)
        {
            return true;
        }
        return false;
        
    }
};