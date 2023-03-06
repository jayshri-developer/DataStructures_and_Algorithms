// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
// TC: O(N)

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    Node* isLoop(Node* head)
    {
        Node* slow = head;
        Node* fast = head;
        
        while(slow && fast && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)
            {
               return fast;
            }
        }
        return NULL;
    }
    
    void removeLoop(Node* head)
    {
        if(!isLoop(head)) return;
        
        Node* fast = isLoop(head);
        Node* slow = head;
        
        // If LL is Circular
        if(fast==head){
            while(fast->next!=head)
            {
                fast=fast->next;
            }
            fast->next=NULL;
            return;
        }
        
        while(fast->next != slow->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        fast->next=NULL;
        return;
    }
};

// Approach 2
// TC: O(N)

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
       bool isloop =false;
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast=fast->next->next;
            if(slow==fast){
                isloop=1;
              break;  
            } 
        }
        if(!isloop){
            return;
        }
        fast=head;
        // edge case if it's cyclic LL
        if(slow==head){
            while(fast->next!=head){
                fast=fast->next;
            }
            fast->next=NULL;
            return;
        }
        // travel till loop start is not found
        while(fast->next!=slow->next){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=NULL;
        return;
    }
};