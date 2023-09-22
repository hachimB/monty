#include "monty.h"
/**
 * _getline_ - get
 * @lineptr: lineptr
 * @n: n
 * @stream: stream
 * Return: ssize_t
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

ssize_t _getline_(char **lineptr, size_t *n, FILE *stream)
{
size_t pos = 0;
int c;
size_t new_size;
char *new_line;
if (!lineptr || n == NULL)
{
errno = EINVAL;
return (-1);
}
if (!(*lineptr) || (*n) == 0)
{
*n = 128;
*lineptr = (char *)malloc(*n);
if (!(*lineptr))
return (-1);
}
while (1)
{
c = fgetc(stream);
if (c == EOF)
{
if (pos == 0)
return (-1);
else
break;
}
(*lineptr)[pos++] = (char)c;
if (pos >= *n - 1)
{
new_size = *n * 2;
new_line = (char *)realloc(*lineptr, new_size);
if (!new_line)
return (-1);
*lineptr = new_line, *n = new_size;
}
if (c == '\n')
break;
}
(*lineptr)[pos] = '\0';
return (pos);
}
