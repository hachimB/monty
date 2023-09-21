#include "monty.h"

/**
 * _strdup_ - strdup
 * @str: string
 * Return: String
 */
char *_strdup_(char *str)
{
	size_t i = 0;
	size_t j = 0;
	char *dup;

	if (!str)
		return (NULL);
	while (str[i] != '\0')
		i++;
	dup = malloc(i + 1);
	if (dup == NULL)
		return (NULL);

	for (j = 0; j < (i + 1); j++)
		dup[j] = str[j];

	return (dup);
}
