// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/sort-a-stack/1
// TC: O(n log(n))

void SortedStack :: sort()
{
   //Your code here
   priority_queue<int> p;
   
   while(!s.empty())
   {
       p.push(s.top());
       s.pop();
   }
   
   while(!p.empty())
   {
       cout<<p.top()<<" ";
       p.pop();
   }
}


// Approach 2
// TC: O(n^n)

void insertInSortedWay( stack<int> &st,int x)
{
    if(st.empty())
    {
        st.push(x);
        return;
    }
    if(x<st.top())
    {
        int elm = st.top();
        st.pop();
        insertInSortedWay(st,x);
        st.push(elm);
    }
    else{
        st.push(x);
        return;
    }
}

void helper(stack<int> &s)
{
    if(s.empty())
    {
        return ;
    }
    int elm = s.top();
    s.pop();
    helper(s);
    insertInSortedWay(s,elm);
}

void SortedStack :: sort()
{
   //Your code here
    helper(s);
}
