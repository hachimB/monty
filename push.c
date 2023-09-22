#include "monty.h"
/**
 * push - push data in the stack.
 * @stack : stack.
 * @line_number: line number
 * Return: nothing.
 */
void push(stack_t **stack, unsigned int line_number)
{
int data;
stack_t *ptr;

if (arrLen(args) != 2 || !isNum(args[1]))
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
superFree(args), args = NULL;
return;
}
data = atoi(args[1]);
ptr = malloc(sizeof(stack_t));
if (!ptr)
{
fprintf(stderr, "L%u: Error: malloc failed\n", line_number);
exit(EXIT_FAILURE);
}
ptr->prev = NULL;
ptr->n = data;
ptr->next = (*stack);
if ((*stack) != NULL)
(*stack)->prev = ptr;
(*stack) = ptr;
}
