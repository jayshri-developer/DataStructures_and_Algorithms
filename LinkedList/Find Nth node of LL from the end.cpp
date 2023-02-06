// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
// TC: O(N)

int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* curr = head;
       int N =0;
       while(curr != NULL)
       {
           curr = curr->next;
           N++;
       }
       
       if(N==n)
       {
           return head->data;
       }
       if(N<n)
       {
           return -1;
       }
       
       int i =0;
       curr = head;
       while((N-i) > n && i<N && curr != NULL)
       {
           curr = curr->next;
           i++;
       }
       return curr->data;
}

// Approach 2
// TC: O(N)

int getNthFromLast(Node *head, int n)
{
       // Your code here
       
       int len = 0;
       Node* curr = head;
       
       while(curr != NULL)
       {
           curr = curr->next;
           len++;
       }
       
       int x = len -n;
       
       if(len < n)
       {
           return -1;
       }
       
       while(x--)
       {
           head = head->next;
       }
       return head->data;
    
}