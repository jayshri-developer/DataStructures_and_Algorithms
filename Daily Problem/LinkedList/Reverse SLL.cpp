// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// TC: O(N)

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        
        Node* pre=NULL;
        Node* temp=head;

        while(temp!=NULL){

            Node* next = temp->next;
            
            temp->next=pre;
            pre=temp;
            temp=next;
        }
        return pre;
    }
};