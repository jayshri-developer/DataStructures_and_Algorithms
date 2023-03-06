// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1
// TC: O(N)

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast != head && fast->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    *head1_ref = head;
    *head2_ref = slow->next;
    slow->next = *head1_ref;
    
    Node* curr = *head2_ref;
    while(curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = *head2_ref;
}
