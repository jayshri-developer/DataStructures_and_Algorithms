// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
// TC: O(N)

/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        if(head == NULL)
        {
            return -1;
        }
        Node* curr = head;
        int count = 0;
        while (curr)
        {
            curr = curr->next;
            count++;
        }
        
        for(int i =0; i<count/2; i++)
        {
            head = head->next;
        }
        return head->data;
    }
};
