// Approach 1
//GFG link: 
// TC: O(N)

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
}
};

// Approach: Recursion + Backtracking [TC: O(N) / SC: O(1)]

void helper(Node* head){
    // base case
    if(head==NULL) return;
    
    // recursive call
    helper(head->next);
    cout<<head->data<<" ";
}

int main() {
    Node* head = new Node(1);
    Node* temp = head;
    
    int i=2;
    while(temp && i<=5){
    Node* newNode = new Node(i);
    temp->next=newNode;
    temp=temp->next;
    i++;
    }
    temp->next=NULL;
    
    temp=head;
    
    while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
    
    helper(head); // calling recursive function
    cout<<endl;
    
    return 0;
}