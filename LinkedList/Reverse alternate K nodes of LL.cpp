// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// TC: O(N)

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
            head->next = next;
        }
        return pre;
    }
};