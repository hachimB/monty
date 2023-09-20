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
if (line_number == 0)
{
fprintf(stderr, "Error: Invalid line number\n");
exit(EXIT_FAILURE);
}
if (stack == NULL)
{
fprintf(stderr, "L%u: Error: stack not found\n", line_number);
exit(EXIT_FAILURE);
}
if (*stack == NULL)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
data = atoi((*stack)->opcode);
ptr = malloc(sizeof(stack_t));
if (ptr == NULL)
{
fprintf(stderr, "L%u: Error: malloc failed\n", line_number);
exit(EXIT_FAILURE);
}
ptr->prev = NULL;
ptr->n = data;
ptr->next = NULL;
if (*stack != NULL)
{
(*stack)->prev = ptr;
ptr->next = *stack;
}
*stack = ptr;
}
