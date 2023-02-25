// Approach 1 (recursion)
//article link: https://www.geeksforgeeks.org/print-alternate-nodes-linked-list-using-recursion/
// TC: O(n)



#include <bits/stdc++.h>
using namespace std;

// A linked list node
struct Node {
	int data;
	struct Node* next;
};

// Inserting node at the beginning
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node =
	(struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void printAlternate(struct Node* node, bool isOdd=true)
{
	if (node == NULL)
	return;
	if (isOdd == true)
		cout << node->data << " ";
	printAlternate(node->next, !isOdd);
}

// Driver code
int main()
{
	// Start with the empty list
	struct Node* head = NULL;

	// construct below list
	// 1->2->3->4->5->6->7->8->9->10

	push(&head, 10);
	push(&head, 9);
	push(&head, 8);
	push(&head, 7);
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	printAlternate(head);

	return 0;
}

