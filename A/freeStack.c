#include "monty.h"

/**
 * freeStack -free the stack
 * @stack: the stack
 */

void freeStack(stack_t *stack)
{
	while (stack)
	{
		if (stack->next == NULL)
		{
			free(stack), stack = NULL;
			break;
		}

		stack = stack->next;

		free(stack->prev);
	}
}
