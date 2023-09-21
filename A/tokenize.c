#include "monty.h"

/**
 * toArray - input to array
 * @str: str
 * @_sep_: separators
 * Return: array.
 */
char **tokenize(char *_code_, char *__sep__)
{
    char *_str = _strdup_(_code_), *tokn, **arr;
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
    _str = _strdup_(_code_);
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
        arr[c] = _strdup_(tokn);
        if (!arr[c])
            return (NULL);
        tokn = strtok(NULL, __sep__);
        c++;
    }
    arr[0] = c ? arr[0] : _strdup_("");
    arr[c ? c : 1] = (char *)NULL;
    free(_str);
    return (arr);
}
