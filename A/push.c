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
    char **args;
    if (line_number == 0)
    {
        fprintf(stderr, "Error: Invalid line number\n");
        exit(EXIT_FAILURE);
    }
    args = tokenize(*arr, " \t");
    data = atoi(args[1]);
    printf("(%d)\n", data);
    ptr = malloc(sizeof(stack_t));
    if (ptr == NULL)
    {
        fprintf(stderr, "L%u: Error: malloc failed\n", line_number);
        exit(EXIT_FAILURE);
    }
    ptr->prev = *stack;
    ptr->n = data;
    ptr->next = NULL;

    if (*stack)
        (*stack)->next = ptr;
    else
        *stack = ptr;
}
