#include<iostream>
#include <inttypes.h>
struct Node
{
	int data;
	Node* npx;
};


Node* XOR(Node* a, Node* b)
{
	return (struct Node*) ((uintptr_t) (a) ^ (uintptr_t) (b));
}

void push(Node*& head,int data)
{
	Node* temp = new Node();
	temp->data = data;
	
	temp->npx = XOR(head,NULL);
	
	if(head)
	{
		Node* next = XOR(head->npx,NULL);
		head->npx = XOR(temp,next);
	}

	head = temp;
}

void PrintList(Node* head)
{
	Node* curr = head;
	Node* prev = NULL;
	Node* next = NULL;
	
	while(curr)
	{
		std::cout << curr->data << " ";
		next = XOR(curr->npx,prev);
		prev = curr;
		curr = next;
	}

	return;
}










