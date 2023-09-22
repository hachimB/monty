#include "monty.h"

/**
 * isNum - is it a number?
 * @str: string
 * Return: is it a number?
 */

int isNum(char *str)
{
	size_t _;

	for (_ = 0; strlen(str) > _; _++)
	{
		if (57 < *(str + _) || 48 > *(str + _))
			return (0);
	}

	return (1);
}
