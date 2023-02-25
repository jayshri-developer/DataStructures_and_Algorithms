// Approach 1 (recursion)
//article link: https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
// TC: O(2^n)
// 3 nodes used


class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        if(N == 0)
        {
            return 0;
        }
        
        long long c1 = toh(N-1, from, aux, to);
        
        cout<<"move disk " << N << " from rod " <<from <<" to rod " << to<<endl;
        
        long long c2 = toh(N-1, aux, to, from);
        return c1+c2+1;
    }

};


// recursive-tower-hanoi-using-4-pegs-rods
// tc: o(2^ n/2)

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod1, char aux_rod2)
{
    if (n == 0)
        return;
    if (n == 1)
    {
        cout << "\n Move disk" <<n << " from rod "
            << from_rod <<" to rod "<<to_rod;
        return;
    }
 
    towerOfHanoi(n - 2, from_rod, aux_rod1, aux_rod2, to_rod);
    cout << "\n Move disk" <<n-1 << " from rod "
        << from_rod <<" to rod "<<aux_rod2;
     
    cout << "\n Move disk" <<n << " from rod "
        << from_rod <<" to rod "<<to_rod;
     
    cout << "\n Move disk" <<n-1 << " from rod "
        << aux_rod2 <<" to rod "<<to_rod;
 
    towerOfHanoi(n - 2, aux_rod1, to_rod, from_rod, aux_rod2);
}
