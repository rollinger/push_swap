#include "stack.h"

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return ;
}

/*
* Swaps the top two elements of a stack
*/
void swapStack(t_stack *Stack)
{
	if (Stack->top >= 1)
		swap(Stack->array[0], Stack->array[1]);
}

/*
* Pushes the top element of a src Stack to a dst Stack
*/
void pushStack(t_stack *srcStack, t_stack *dstStack)
{
	if (isEmptyStack(srcStack) != 1 && isFullStack(dstStack) != 1)
		pushStack(dstStack, popStack(srcStack))
}