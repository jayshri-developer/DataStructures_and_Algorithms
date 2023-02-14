// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1
// TC: O(N)

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* tail=head;
        while(tail->next != NULL) tail=tail->next;
        
        Node* curr=head;
        
        while(k>0){
        tail->next=head;
        head=head->next;
        curr->next=NULL;
        curr=head;
        tail=tail->next;
        k--;
        }
        return head;
    }
};
    
// Approach 2
// TC: O(N)

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(!head && !head->next)
        {
            return head;
        }
        Node* temp = head;
        Node* next = NULL;
        
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = head;
        temp = head;
        int count =1;
        while(temp && count<k)
        {
            count++;
            temp = temp->next;
        }
        next = temp->next;
        temp->next = NULL;
        return next;
    }
};