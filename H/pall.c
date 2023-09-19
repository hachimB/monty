#include "monty.h"
/**
 * pall - print all data.
 * Return: nothing.
 */
void pall(void)
{
stack_t *ptr;
if (top == NULL)
return;
ptr = top;
while (ptr != NULL)
{
printf("%d", ptr->n);
ptr = ptr->next;
}
}
