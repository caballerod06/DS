#ifndef STACK_H
#define STACK_H

typedef struct Node
{
	int data;
	struct Node *next;
}Node;

void Push(Node **, int);
void Pop(Node **);
void Print(Node *);
int Top(Node *);

#endif
