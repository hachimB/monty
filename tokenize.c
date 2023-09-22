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
char *_str = _strdup_(_code_, line_number), *tokn, **arr;
int n = 0, c = 0;
if (!_str)
return (NULL);
tokn = NULL;
if (strcmp(_str, "") != 0)
tokn = strtok(_str, __sep__);
while (tokn)
{
tokn = strtok(NULL, __sep__);
n++;
}
free(_str);
_str = _strdup_(_code_, line_number);
if (!_str)
return (NULL);
if (strcmp(_str, "") != 0)
tokn = strtok(_str, __sep__);
n = n ? n : 1;
arr = malloc(sizeof(char *) * (n + 1));
if (!arr)
return (NULL);
while (tokn)
{
arr[c] = _strdup_(tokn, line_number);
if (!arr[c])
return (NULL);
tokn = strtok(NULL, __sep__);
c++;
}
arr[0] = c ? arr[0] : _strdup_("", line_number);
arr[c ? c : 1] = (char *)NULL;
free(_str);
return (arr);
}
