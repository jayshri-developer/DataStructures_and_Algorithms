class Solution {
public:
    string reversePrefix(string word, char ch) {
        string str = "";
        bool flag = 0;
        int len = word.size();
        string ans = "";
        int count = 0;

        for(int i = 0; i < word.size(); i++)
        {
            str = str + word[i];
            if(word[i] == ch)
            {
                count++;
                if(count == 1)
                {
                    reverse(str.begin(), str.end());
                }
                // ans = str;
                // ans  = ans + word[i];
                flag = 1;
            }
        }
        // if(flag == 1)
        // {
        //     return ans;
        // }
        return str;
    }
};