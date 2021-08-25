#include "stack.h"

t_stack *initStack(unsigned int capacity)
{
    t_stack *new;

    new = (t_stack *)malloc(sizeof(t_stack));
    new->capacity = capacity;
    new->top = -1;
    new->array = (int *)malloc(sizeof(int) * capacity);
    return (new);
}

void    freeStack(t_stack *Stack)
{
    free(Stack->array);
    free(Stack);
}

void    pushStack(t_stack *Stack, int element)
{
    if(isFullStack(Stack) != 1)
        Stack->array[++Stack->top] = element;
}

int     popStack(t_stack *Stack)
{
    if (isEmpty(Stack) != 1)
        return Stack->array[Stack->top--];
}

int     peekStack(t_stack *Stack)
{
    if (isEmpty(Stack) != 1)
        return (Stack->array[Stack->top]); 
}

int     isFullStack(t_stack *Stack)
{
    if (Stack->top == Stack->capacity - 1)
        return (1);
    return (0);
}

int     isEmptyStack(t_stack *Stack)
{
    if (Stack->top == -1)
        return (1);
    return (0);
}