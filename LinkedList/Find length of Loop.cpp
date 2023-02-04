// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/find-length-of-loop/1
// TC: O(N)

int countNodesinLoop(struct Node *head)
{
    // Code here
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast)
        {
            int count = 1;
            slow = slow->next;
            while(slow != fast)
            {
                slow = slow->next;
                count++;
            }
            return count;
        }
    }
    return 0;
}