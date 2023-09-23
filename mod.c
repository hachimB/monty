#include "monty.h"
/**
 * mod - mod.
 * @stack : stack.
 * @line_number: line number
 * Return: nothing.
 */
void mod(stack_t **stack, unsigned int line_number)
{
int rest;
stack_t *ptr;
if (stackLen(*stack) < 2)
{
fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
if (!(*stack)->n)
{
fprintf(stderr, "L%u: division by zero\n", line_number);
exit(EXIT_FAILURE);
}
if (*stack)
{
ptr = *stack;
*stack = (*stack)->next;
rest = (*stack)->n % ptr->n;
(*stack)->n = rest;
(*stack)->prev = NULL;
free(ptr);
ptr = NULL;
}
}
