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
void swapTopStack(t_stack *Stack)
{
	if (Stack->top >= 1)
		swap(Stack->array[0], Stack->array[1]);
}

/*
* Pushes the top element of a src Stack to a dst Stack
*/
void pushTopToStack(t_stack *srcStack, t_stack *dstStack)
{
	if (isEmptyStack(srcStack) != 1 && isFullStack(dstStack) != 1)
		pushStack(dstStack, popStack(srcStack));
}

/*
* Rotates the stack so that the top is at the bottom
*	swapped  1 2 3 4
* 1 2 3 4 => 4 1 2 3
*/
void rotateStack(t_stack *Stack)
{
	int swapped;
	int i;

	if (isEmptyStack(Stack) != 1)
	{
		swapped = peekStack(Stack);
		i = 0;
		while (i <= Stack->top)
		{
			swap(swapped, Stack->array[i++]);
		}
	}
}

/*
* Reverse Rotates the stack so that the bottom is at the top
*	swap i & i+1 
* 1 2 3 4 => 2 3 4 1
*/
void reverse_rotateStack(t_stack *Stack)
{
	int i;

	if (isEmptyStack(Stack) != 1)
	{
		i = 0;
		while (i < Stack->top)
		{
			swap(Stack->array[i], Stack->array[i + 1]);
			i++;
		}
	}
}