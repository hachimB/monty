#include "monty.h"

/**
 * pop - swap 2 numbers of the stack
 * @stack: stack
 * @line_number: line number
*/

void pop(stack_t **stack, unsigned int line_number)
{
    stack_t **h = stack;

    if (!(*stack))
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    while (*h)
    {
        if (!(*h)->next)
        {
            (*h)->prev->next = NULL;
            
            free(*h), *h = NULL;
        }

        *h = (*h)->next;
    }
}