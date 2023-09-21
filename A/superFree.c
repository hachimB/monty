#include "monty.h"

/**
 * superFree - ultimate free function
 * @__: _______
*/

void superFree(char **__)
{
    char **_ = __;

    while (*_)
    {
        free(*_);
        _++;
    }

    free(__);
}