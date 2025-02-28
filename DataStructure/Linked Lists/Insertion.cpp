#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
};


void push(Node** head_ref, int new_data)
{
	// 1. allocate node
	Node* new_node = new Node();

	// 2. put in the data
	new_node->data = new_data;

	// 3. make next of new node as head
	new_node->next = (*head_ref);

	// 4. move the head to point to the new node
	(*head_ref) = new_node;
}


void insertAfter(Node* prev_node, int new_data)
{
	// 1. check if the given prev_node is NULL
	if(prev_node == NULL)
	{
		cout<<"the given previous node cannot be NULL";
		return;
	}
	// 2. allocate new node
	Node* new_node = new Node();

	// 3. put in the data

	new_node->data = new_data;

	// 4. Make next of new node as next of prev_node
	new_node->next = prev_node->next;

	// 5. move the next of prev_node as new_node
	prev_node->next = new_node;

}


void append(Node** head_ref, int new_data)
{
	// 1. allocate node
	Node* new_node = new Node();

	Node *last = *head_ref;

	// 2. put in the data
	new_node->data = new_data;

	// 3. this new node is going to be the last node,
	// so make next of it as NULL

	new_node->next = NULL;

	// 4. if the linked list is empty then make
	// the new node as head

	if(*head_ref =NULL)
	{
		*head_ref = new_node;
		return;
	}

	// 5. Else traverse till the last node 

	while(last->next !=NULL)
	{
		last = last->next;
	}

	// 6. change the next of last node

	last->next = new_node;
	return;
}


void printList(Node* node)
{
	while(node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}






int main()
{
	Node* head = NULL;
	append(&head, 6);

	push(&head, 7);

	push(&head, 1);

	append(&head, 4);

	append(&head, 12)

	insertAfter(head->next, 8);

	cout<<"Created Linked list is: ";
	printList(head);
	return 0;
}