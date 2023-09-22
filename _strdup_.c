#include "monty.h"

/**
 * _strdup_ - strdup
 * @str: string
 * Return: String
 */
char *_strdup_(char *str, unsigned int line_number)
{
char *s = malloc(strlen(str) + 1);
if (!s)
{
fprintf(stderr, "L%u: Error: malloc failed\n", line_number);
exit(EXIT_FAILURE);
}
strcpy(s, str);
return (s);
}
