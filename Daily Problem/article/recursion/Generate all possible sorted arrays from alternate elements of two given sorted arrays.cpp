// Approach 1 (recursion)
//article link: https://www.geeksforgeeks.org/generate-all-possible-sorted-arrays-from-alternate-elements-of-two-given-arrays/
// TC: O(n1^2 + n2^2)


#include<iostream>
using namespace std;
void printArray(int arr[], int n);
void getSortedArr(int ArrA[], int ArrB[], int output[], int i, int j, int m, int n, int len, bool flag)
{
    if (flag)
    {
        if (len)
            printArray(output, len+1);
        for (int k = i; k < m; k++)
        {
            if (!len)
            {
                output[len] = ArrA [k];
                getSortedArr(ArrA, ArrB, output, k+1, j, m, n, len, !flag);
            }
            else
            {
                if (ArrA [k] > output[len])
                {
                    output[len+1] = ArrA [k];
                    getSortedArr(ArrA, ArrB, output, k+1, j, m, n, len+1, !flag);
                }
            }
        }
    }
    else
    {
        for (int l = j; l < n; l++)
        {
            if (ArrB[l] > output[len])
            {
                output[len+1] = ArrB[l];
                getSortedArr(ArrA, ArrB, output, i, l+1, m, n, len+1, !flag);
            }
        }
    }
}
void generate(int ArrA [], int ArrB[], int m, int n)
{
    int output[m+n];
    getSortedArr(ArrA, ArrB, output, 0, 0, m, n, 0, true);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int ArrA [] = {9, 12, 66};
    int ArrB[] = {10, 15, 25};
    int n = sizeof(ArrA)/sizeof(ArrA [0]);
    int m = sizeof(ArrB)/sizeof(ArrB[0]);
    generate(ArrA, ArrB, n, m);
    return 0;
}
