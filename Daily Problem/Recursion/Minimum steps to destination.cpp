// Approach 1 
//gfg link:  https://practice.geeksforgeeks.org/problems/minimum-number-of-steps-to-reach-a-given-number5234/1
// TC: O(D)

class Solution{
public:
    int minSteps(int D){
        // code here
        int steps = 0;
        int sum = 0;
        
        while(true)
        {
            sum = sum + steps;
            steps++;
            
            if(sum == D)
            {
                return steps-1;
                break;
            }
            
            if(sum > D & (sum -D) %2 == 0)
            {
                return steps-1;
                break;
            }
        }
        return 0;
    }
};
