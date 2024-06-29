class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        priority_queue<int> pq;
        for(int i = 0; i < n; i++)
        {
            pq.push(stones[i]);
        }

        while(pq.size() > 1)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            if(x != y)
            {
                int ans = (x-y);
                pq.push(ans);
            }
            

        }
        if(!pq.empty())
        {
            return pq.top();
        }
        return 0;
    }
};

// [2,7,4,1,8,1]
// [8,7,4,2,1,1]
// 4,2,1,1,1
// 2 1 1 1
// 1 1 1