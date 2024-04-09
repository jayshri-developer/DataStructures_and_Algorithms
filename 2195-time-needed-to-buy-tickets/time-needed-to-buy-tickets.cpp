// OJ: https://leetcode.com/problems/time-needed-to-buy-tickets/
// Author: github.com/lzl124631x
// Time: O(SUM(A))
// Space: O(1)
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count = 0;
        while (true) 
        {
            for (int i = 0; i < tickets.size(); i++) 
            {
                if (tickets[i] == 0) 
                {
                    continue;
                }
                tickets[i]--;
                count++;
                if (tickets[k] == 0) 
                {
                    return count;
                }
            }
        }
    }
};