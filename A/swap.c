#include "monty.h"

/**
 * swap - swap 2 numbers of the stack
 * @stack: stack
 * @line_number: line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *ptr;
    int data;
    if (stackLen(*stack) <= 2)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    ptr = (*stack)->next;
    data = (*stack)->n;
    (*stack)->n = ptr->n;
    ptr->n = data;
}