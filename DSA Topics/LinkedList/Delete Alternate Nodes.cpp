// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/delete-alternate-nodes/1
// TC: O(N)

void deleteAlt(struct Node *head){
    // Code here
    
    Node* temp = head;
    
    while(temp != NULL && temp->next != NULL)
    {
        temp->next = temp->next->next;
        temp = temp->next;
    }
}
