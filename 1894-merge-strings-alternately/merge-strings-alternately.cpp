class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        char ans[word1.size() + word2.size()];

        int word1_count = word1.size();
        int word2_count = word2.size();

        int i = 0;
        int m = 0; 
        int n = 0;

        while(word1_count > 0 || word2_count > 0)
        {
            if(word1_count > 0)
            {
                ans[i] = word1[m];
                m++;
                i++;
                word1_count--;
            }

            if(word2_count > 0)
            {
                ans[i] = word2[n];
                n++;
                i++;
                word2_count--;
            }
        }

        return string(ans, ans+i);
    }
};