#include "monty.h"

/**
 * _read_ - a
 * @as: a
 * @_codeLine_: a
 * @line: a
 * @_instr: a
 * @_byteCode_: a
 * @__Stack__: a
 */

void _read_(
	char ***as,
	char **_codeLine_,
	unsigned int *line,
	instruction_t _instr[11],
	FILE **_byteCode_,
	stack_t **__Stack__)
{
	int _;

	*as = tokenize(*_codeLine_, " \t\n", *line);

	if (***as == '#')
	{
		superFree(*as), *as = NULL;
		return;
	}
	for (_ = 0; _ < 11; _++)
	{
		if (strcmp((*as)[0], _instr[_].opcode) == 0)
			break;
	}
	if (_ == 11)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", *line, (*as)[0]);
		superFree(*as), freeStack(*__Stack__), free(*_codeLine_);
		fclose(*_byteCode_);
		exit(EXIT_FAILURE);
	}
	_instr[_].f(__Stack__, *line);
	if (!*as)
	{
		freeStack(*__Stack__), free(*_codeLine_);
		fclose(*_byteCode_);
		exit(EXIT_FAILURE);
	}
	superFree(*as), *as = NULL;
	(*line)++;
}
