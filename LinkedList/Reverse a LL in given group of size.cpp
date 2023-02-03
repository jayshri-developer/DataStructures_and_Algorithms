// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
// TC: O(N)

/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* curr = head;
        node* pre = NULL;
        node* next;
        int count = 0;
        
        while( curr != NULL && count < k)
        {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
            count++;
        }
        
        if(next != NULL)
        {
            head->next = reverse(next, k);
        }
        return pre;
    }
};
