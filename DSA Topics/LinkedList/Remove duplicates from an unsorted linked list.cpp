// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
// TC: O(N)

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int, int> map;
     Node* temp = head;
     map[temp->data] = 1;
     
     while(temp->next != NULL)
     {
         if(map.count(temp->next->data))
         {
             temp->next = temp->next->next;
         }
         else
         {
             temp = temp->next;
             map[temp->data]++;
         }
     }
     return head;
     
    }
};
