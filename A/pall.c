#include "monty.h"
/**
 * pall - print all data.
 * @stack: stack.
 * @line_number: line number.
 * Return: nothing.
 */
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *ptr;
    (void)line_number;

    ptr = (*stack);
    while (ptr)
    {
        printf("%d\n", ptr->n);
        ptr = ptr->next;
    }
}
