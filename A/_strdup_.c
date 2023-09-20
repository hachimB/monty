#include "monty.h"

/**
 * _strdup_ - strdup
 * @str: string
 * Return: String
*/

char *_strdup_(char *str)
{
    char *s = malloc(strlen(str));
    
    if (!s)
        return (NULL);
    
    strcpy(s, str);

    return (s);
}