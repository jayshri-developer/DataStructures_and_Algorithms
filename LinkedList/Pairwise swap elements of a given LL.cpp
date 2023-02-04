// Approach 1
//GFG link: https://leetcode.com/problems/swap-nodes-in-pairs/
// TC: O(N)

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode* temp ;
        temp = head->next;
        head->next = swapPairs(head->next->next);
        temp->next = head;

        return temp;
    }
};