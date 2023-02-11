// Approach 1
//GFG link: https://leetcode.com/problems/reverse-nodes-in-k-group/
// TC: O(N)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL) 
        {
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        ListNode* temp = head;
        int count = 0;
        while(temp)
        {
            temp=temp->next;
            count++;
        }

        int i=0;
        if(count >= k)
        {
            while(curr && i<k)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                i++;
            }
            if(next) 
            {
                head->next = reverseKGroup(next, k);
            }
        }
        else 
        {
            return head;
        }
        return prev;
    }
};
