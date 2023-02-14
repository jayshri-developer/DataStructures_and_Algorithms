// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1
// TC: O(N)

Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* temp1 = head1;
    Node* temp2 = head2;
    
    if(temp1 == NULL)
    {
        return head2;
    }
    if(temp2 == NULL)
    {
        return head1;
    }
    
    Node* head;
    if(temp1->data < temp2->data)
    {
        head = temp1;
        temp1= temp1->next;
    }
    else
    {
        head = temp2;
        temp2 = temp2->next;
    }
    
    Node* temp = head;
    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1->data < temp2->data)
        {
            temp->next = temp1;
            temp = temp->next;
            temp1 = temp1->next;
        }
        else
        {
            temp->next = temp2;
            temp = temp->next;
            temp2 = temp2->next;
        }
    }
    
    if(temp1 ==NULL && temp2 != NULL)
    {
        temp->next = temp2;
    }
    if(temp1 != NULL && temp2 == NULL)
    {
        temp->next = temp1;
    }
    return head;
}  
