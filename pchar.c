#include "monty.h"

/**
 * pchar - putchar
 * @stack: s
 * @line_number: numero 5
*/

void pchar(stack_t **stack, unsigned int line_number)
{
    if ((*stack)->n > 127 || (*stack)->n < 0)
    {
        fprintf(stderr, 
        "L%u: can't pchar, value out of range\n",
        line_number
        );
        exit(EXIT_FAILURE);
    }

    if (!(*stack))
    {
        fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%c\n", (*stack)->n);
}