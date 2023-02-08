// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/circular-linked-list-traversal/1
// TC: O(N)

void printList(struct Node *head)
{
  // code here
  
  Node* temp = head ;
  
  while(temp->next != head)
  {
      cout<<temp->data<< " ";
      temp = temp->next;
  }
  cout<<temp->data;
}
