#include "monty.h"

/**
 * isNum - is it a number?
 * @str: string
 * Return: is it a number?
 */

int isNum(char *str)
{
char *s = str;
if (*s == '-')
s++;
while (*s)
{
if (57 < *(s) || 48 > *(s))
return (0);
s++;
}
return (1);
}
