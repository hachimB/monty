#include "monty.h"

/**
 * superFree - ultimate free function
 * @__: _______
 * Return: nothing
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
