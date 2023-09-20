#include "monty.h"

/**
 * stackLen - length of the stack
 * @s: stack
 * Return: len of s
*/

int stackLen(stack_t *s)
{
    int _ = 0;

    while (s)
        s = s->next, _++;

    return (_);
}