#include "monty.h"

/**
 * stackLen - length of the stack
 * @s: stack
 * Return: len of s
*/

int stackLen(stack_t *s)
{
int count = 0;
stack_t *ptr;
ptr = s;
while (ptr)
{
ptr = ptr->next;
count++;
}
return (count);
}
