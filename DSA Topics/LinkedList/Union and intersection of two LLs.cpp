// Approach 1
//GFG link: https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/1
// TC: O(N+ M)

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    Node* temp1=head1;
    Node* temp2=head2;
    
    map<int,int> m;
    
    Node* head = new Node(-1);
    Node* tail = head;
    
    while(temp1)
    {
        m[temp1->data]++;
        temp1 = temp1->next;
    }
    
    while(temp2)
    {
        m[temp2->data]++;
        temp2 = temp2->next;
    }
    
    for(auto i:m)
    {
        Node* newNode = new Node(i.first);
        tail->next = newNode;
        tail = tail->next;
    }
    tail->next=NULL;
    
    return head->next;
}
