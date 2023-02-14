// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1
// TC: O(N+M)

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* temp1 = head1;
    Node* temp2 = head2;
    
    if(temp1 == NULL || temp2 == NULL)
    {
        return NULL;
    }
    
    Node* temp; 
    Node* ans = NULL;
    Node* curr = NULL;
    
    while(temp1 != NULL && temp2 != NULL )
    {
        if(temp1->data == temp2->data)
        {
            int val = temp1->data;
            Node* temp = new Node(val);
            
            if(ans == NULL)
            {
                ans = temp;
            }
            else
            {
                curr->next = temp;
            }
            curr = temp;
            
            temp1= temp1->next;
            temp2 = temp2->next;
        }
        else
        {
            if(temp1->data < temp2->data)
            {
                temp1 = temp1->next;
            }
            else
            {
                temp2 = temp2->next;
            }
        }
    }
    return ans ;
}
