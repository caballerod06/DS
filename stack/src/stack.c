#include "stdio.h"
#include "stdlib.h"

void Push(Node **stack, int val)
{
	Node *temp = NULL;

	temp = (Node *)malloc(sizeof(Node));
	if (temp)
	{
		temp->data = val;
	}
	else
	{
		printf("\nCannot Allocate Memory!!");
		return;
	}

	if (NULL == *stack)
	{
		*stack = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *stack;
		*stack = temp;
	}
}

void Pop(Node **stack)
{
	Node *temp = *stack;

	if (NULL != *stack)
	{
		*stack = (*stack)->next;
		free(temp);
	}
	else
	{
		printf("\nStack is empty!!");
	}
}

int Top(Node *stack)
{
	return stack->data;
}

void Print(Node *stack)
{
	Node *temp = stack;

	if(NULL == temp)
	{
		printf("\nStack is empty!!");
		return;
	}

	while (NULL != temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
