#include "monty.h"
/**
 * sub - push data in the stack.
 * @stack : stack.
 * @line_number: line number
 * Return: nothing.
 */
void mul(stack_t **stack, unsigned int line_number)
{
int mult;
stack_t *ptr;
if (stackLen(*stack) < 2)
{
fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
if (*stack)
{
ptr = *stack;
*stack = (*stack)->next;
mult = (*stack)->n * ptr->n;
(*stack)->n = mult;
(*stack)->prev = NULL;
free(ptr);
ptr = NULL;
}
}
