#include "monty.h"
/**
 * push - push data in the stack.
 * @data : data to push.
 */
void push(int data)
{
stack_t *ptr = malloc(sizeof(stack_t));
if (ptr == NULL)
exit(1);
ptr->prev = NULL;
ptr->n = data;
ptr->next = NULL;
if (top != NULL)
{
ptr->next= top;
top->prev = ptr;
}
top = ptr;
}
