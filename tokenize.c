#include "monty.h"
#include <string.h>
/**
 * tokenize - tokenize code
 * @_code_: the code
 * @__sep__: separator
 * @line_number: lllll
 * Return: Array
*/

char **tokenize(char *_code_, char *__sep__, unsigned int line_number)
{
char *code = _strdup_(_code_, line_number), *token,
**arr;
int len = 1, _ = 0;
token = strtok(code, __sep__);
while (token)
{
token = strtok(NULL, __sep__);
len++;
}
free(code), code = _strdup_(_code_, line_number);
token = strtok(code, __sep__);
arr = malloc(sizeof(char *) * (len + 1));
if (!arr)
{
fprintf(stderr, "L%u: Error: malloc failed\n", line_number);
free(code);
exit(EXIT_FAILURE);
}
while (token)
{
arr[_] = _strdup_(token, line_number);
token = strtok(NULL, __sep__);
_++;
}
arr[_] = NULL;
free(code);
return (arr);
}
