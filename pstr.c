#include "monty.h"

/**
 * pstr - pstr
 * @stack: s
 * @line_number: numero 5
 */

void pstr(stack_t **stack, unsigned int line_number)
{
stack_t *_Stack_ = *stack;
(void)line_number;
while (_Stack_)
{
if (!_Stack_->n || (_Stack_->n < 0 || _Stack_->n > 127))
break;
printf("%c", _Stack_->n);
_Stack_ = _Stack_->next;
}
printf("%s", "\n");
}
