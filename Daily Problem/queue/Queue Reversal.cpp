// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/queue-reversal/1
// TC: O(N)

void healper(queue<int> &q)
{
    if(q.empty())
    {
        return;
    }
    
    int x = q.front();
    q.pop();
    healper(q);
    q.push(x);
}

queue<int> rev(queue<int> q)
{
    // add code here.
    healper(q);
    return q;
}
