class Solution {
public:

    long long countSubarrays(vector<int>& A, int minK, int maxK) 
    {
        long res = 0;
        long jbad = -1;
        long jmin = -1;
        long jmax = -1;
        long n = A.size();

        for (int i = 0; i < n; ++i) 
        {
            if (A[i] < minK || A[i] > maxK)
            {
                jbad = i;
            } 
            if (A[i] == minK) 
            {
                jmin = i;
            }
            if (A[i] == maxK)
            {
                jmax = i;
            }
            
            res += max(0L, min(jmin, jmax) - jbad);
        }
        return res;
    }
};