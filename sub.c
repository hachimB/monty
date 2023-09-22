#include "monty.h"
/**
 * sub - push data in the stack.
 * @stack : stack.
 * @line_number: line number
 * Return: nothing.
 */
void sub(stack_t **stack, unsigned int line_number)
{
int diff;
stack_t *ptr;
if (stackLen(*stack) < 2)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
if (*stack)
{
ptr = *stack;
*stack = (*stack)->next;
diff = (*stack)->n - ptr->n;
(*stack)->n = diff;
(*stack)->prev = NULL;
free(ptr);
ptr = NULL;
}
}
