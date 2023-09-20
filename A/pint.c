#include "monty.h"

/**
 * pint - prints the value at the top of the stack.
 * @stack: stack
 * @line_number: line number
 * Return: the top element of the stack.
*/

void pint(stack_t **stack, unsigned int line_number)
{
if (!(*stack))
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
}
