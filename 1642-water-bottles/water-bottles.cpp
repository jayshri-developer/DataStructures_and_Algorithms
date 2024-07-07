class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        long result = 0;
        int rem = 0;
        while(numBottles >= 0)
        {
            int ans = numBottles/numExchange;
            result = result + ans* numExchange;
            rem = numBottles % numExchange;
            numBottles = rem + ans;
            if(numBottles < numExchange )
            {
                result = result + numBottles;
                break;
            }
            // result = result + ans; 
        }

        // int b = 0;
        // if(numBottles > 0)
        // {
        //     b = numBottles;
        // }
        // cout<<numBottles<<"->" << result<<"->" <<rem <<"->"<<b;
        return result  ;
    }
};
// 9 +1 +1 + 1 +1  13
// 9 /3 = 3
// 3/3 = 1