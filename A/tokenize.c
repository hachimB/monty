#include "monty.h"
#include <string.h>
/**
 * tokenize - tokenize code
 * @code: the code
 * @sep: separator
 * Return: Array
*/

char **tokenize(char *_code_, char *__sep__)
{
    char *code = _strdup_(_code_), *token,
        **arr;
    int len = 1, _ = 0;

    token = strtok(code, __sep__);

    while (token)
    {

        token = strtok(NULL, __sep__);

        len++;
    }

    free(code), code = _strdup_(_code_);

    token = strtok(code, __sep__);

    arr = malloc(sizeof(char *) * (len + 1));
    
    if (!arr)
        return (NULL);

    while (token)
    {
        arr[_] = token;
        token = strtok(NULL, __sep__);
        _++;
    }

    arr[_] = NULL;

    free(code);

    return (arr);
}