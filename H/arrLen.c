#include "monty.h"

/**
 * arrLen - array lenght
 * @arr: array
 * Return: int
*/
int arrLen(char **arr)
{
char **a = arr;
int len = 0;
while (*a)
a++, len++;
return (len);
}
