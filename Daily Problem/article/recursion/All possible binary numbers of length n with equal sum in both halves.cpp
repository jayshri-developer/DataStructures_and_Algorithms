// Approach 1 (recursion)
//article link: https://www.geeksforgeeks.org/all-possible-binary-numbers-of-length-n-with-equal-sum-in-both-halves/
// TC: O(2^n)

#include <bits/stdc++.h>
using namespace std;
 

void equal(int n, string left="", string right="", int di=0)
{
    //base condition
    
    if (n == 0)
    {
        if (di == 0)
            cout << left + right << " ";
        return;
    }
//  base condition
    if (n == 1)
    {
        if (di == 0)
        {
            cout << left + "0" + right << " ";
            cout << left + "1" + right << " ";
        }
        return;
    }
 
    if ((2 * abs(di) <= n))
    { 
        equal(n-2, left+"0", right+"0", di);
        equal(n-2, left+"0", right+"1", di-1);
        equal(n-2, left+"1", right+"0", di+1);
        equal(n-2, left+"1", right+"1", di);
    }
}
 
/* driver function */
int main()
{
    int n = 3; // n-bits
    equal(n);
    return 0;
}
