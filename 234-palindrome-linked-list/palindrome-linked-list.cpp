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
    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        ListNode* curr = head;

        while(curr)
        {
            ans.push_back(curr->val);
            curr= curr->next;
        }
        int j = ans.size();
        for(int i = 0; i < j-1/2; i++, j--)
        {
            if(ans[i] != ans[j -1])
            {
                return false;
            }
        }
        return true;
    }
};