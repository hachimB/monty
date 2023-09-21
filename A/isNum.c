#include "monty.h"

/**
 * isNum - is it a number?
 * @str: string
 * Return: is it a number?
 */

int isNum(char *str)
{
    if (atoi(str) == 0 && strcmp(str, "0") != 0)
        return (0);
    return (1);
}
