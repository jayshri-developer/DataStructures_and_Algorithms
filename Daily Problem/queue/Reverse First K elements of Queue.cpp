// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
// TC: O(N)

queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> st;
    for(int i =0; i<k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    
    queue<int> res;
    while(!st.empty())
    {
        res.push(st.top());
        st.pop();
    }
    
    while(!q.empty())
    {
        res.push(q.front());
        q.pop();
    }
    
    return res;
}
