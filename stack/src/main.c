#include "stdio.h"
#include "stack.h"

int main(void)
{
	Node *stack = NULL;

	Push(&stack, 8);
	Push(&stack, 11);
	Push(&stack, 4);
	Push(&stack, 1);
	Push(&stack, 90);
	Push(&stack, 12);

	Print(stack);

	printf("\nPop");
	Pop(&stack);

	printf("\nCurrent top is: %d", Top(stack));

	printf("\nPop");
	Pop(&stack);

	Print(stack);

	printf("\nCurrent top is: %d", Top(stack));

	return 0;
}
