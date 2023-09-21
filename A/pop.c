#include "monty.h"

/**
 * pop - deletes the last value of the stack
 * @stack: stack
 * @line_number: line number
 * Return: nothing.
 */

void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *h;
    h = *stack;
    if (!(*stack))
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
    *stack = (*stack)->next;
    if (*stack)
        (*stack)->prev = NULL;
    free(h);
    h = NULL;
}
