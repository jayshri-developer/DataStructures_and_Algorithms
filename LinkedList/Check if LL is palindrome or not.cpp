// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1
// TC: O(N)

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        int n= 0;
        Node* temp = head;
        while(temp != NULL)
        {
            temp = temp ->next;
            n++;
        }
        
        int arr[n];
        int i = 0;
        temp = head;
        while(temp != NULL)
        {
            arr[i++] = temp->data;
            temp = temp->next;
        }
        
        for(int i=0; i<=n/2; i++)
        {
            if(arr[i] != arr[n-i-1])
            {
                return 0;
            }
        }
        return 1;
    }
};
