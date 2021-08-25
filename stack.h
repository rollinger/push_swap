#include <stddef.h>

typedef struct  s_stack{
    int             top;
    unsigned int    capacity;
    int             *array;
}               t_stack;

t_stack *initStack(unsigned int capacity);
void    freeStack(t_stack *Stack);
void    pushStack(t_stack *Stack, int element);
int     popStack(t_stack *Stack);
int     peekStack(t_stack *Stack);
int     isFullStack(t_stack *Stack);
int     isEmptyStack(t_stack *Stack);
