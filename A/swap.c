#include "monty.h"

/**
 * swap - swap 2 numbers of the stack
 * @stack: stack
 * @line_number: line number
*/

void swap(stack_t **stack, unsigned int line_number)
{
    stack_t **h = stack, *prv;

    if (stackLen(*stack) <= 2)
    {
        fprintf(stderr, "L%s: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    while ((*h)->next)
        *h = (*h)->next;
    
    prv = (*h)->prev;

    (*h)->prev = *h;
    *h = prv;
}