#include "monty.h"
/**
 * divide - push data in the stack.
 * @stack : stack.
 * @line_number: line number
 * Return: nothing.
 */
void divide(stack_t **stack, unsigned int line_number)
{
	int divd;
	stack_t *ptr;

	if (stackLen(*stack) < 2)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
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
		divd = (*stack)->n / ptr->n;
		(*stack)->n = divd;
		(*stack)->prev = NULL;
		free(ptr);
		ptr = NULL;
	}
}
