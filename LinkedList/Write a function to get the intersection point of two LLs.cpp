// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
// TC: O(N+M)

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* temp1 = head1;
    Node* temp2 = head2;
    
    while(1)
    {
        if(temp1 == temp2)
        {
            return temp1->data;
        }
        
        temp1 = temp1->next;
        temp2 = temp2->next;
        if(temp1 == NULL && temp2 == NULL)
        {
            return -1;
        }
        if(temp1 == NULL)
        {
            temp1 = head2;
        }
        if(temp2 == NULL)
        {
            temp2 = head1;
        }
    }
    return -1;
}

// Approach 2
//GFG link: https://leetcode.com/problems/intersection-of-two-linked-lists/
// TC: O(N+M)

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        while(temp1 != temp2)
        {
            if(temp1 == NULL)
            {
                temp1 = headB;
            }
            else
            {
                temp1 = temp1->next;
            }

            if(temp2 == NULL)
            {
                temp2 = headA;
            }
            else
            {
                temp2 = temp2->next;
            }
        }
        return temp1;
    }
};
