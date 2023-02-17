// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/implement-atoi/1
// TC: O(N)

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int res=0, i=0;
        int sign=1;

        if(str[i]=='-') {
            sign=-1;
            i++;
        }

        while(str[i]) {
            if (!((str[i]-'0' >=0) && (str[i]-'0' <=9))) 
            {
                return -1;
            }
            else 
            {
                res = res * 10 + str[i] - '0';
            }
            i++;
        }
        return res*sign;
    }
};
