#include "monty.h"
/**
 * add - push data in the stack.
 * @stack : stack.
 * @line_number: line number
 * Return: nothing.
 */
void add(stack_t **stack, unsigned int line_number)
{
int sum;
stack_t *ptr;
if (stackLen(stack) < 2)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
if (*stack)
{
ptr = *stack;
*stack = (*stack)->next;
sum = (*stack)->n + ptr->n;
(*stack)->n = sum;
(*stack)->prev = NULL;
free(ptr);
ptr = NULL;
}
}
