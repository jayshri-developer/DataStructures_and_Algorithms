// Approach 1 (recursive)
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

// Approach 2 (Iterative)
//GFG link: https://leetcode.com/problems/swap-nodes-in-pairs/
// TC: O(N)

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        ListNode* temp = head;
        
        while(temp  != NULL && temp->next != NULL)
        {
            swap(temp->val, temp->next->val);
            temp = temp->next->next;
        }

        return head;
    }
};

