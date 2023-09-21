#include "monty.h"

/**
 * main - check the code.
 * @argc : argc of main function.
 * @argv : argv of main function.
 * Return: always 0
 */

char **arr;
int main(int argc, char **argv)
{
FILE *_byteCode_;
char *_byteCodeContent_ = NULL, **args, **_arr;
stack_t *__Stack__;
instruction_t _instr[7] = {{"pop", pop}, {"swap", swap}, {"add", add},
{"push", push}, {"pint", pint}, {"pall", pall}, {"nop", nop}};
int _;
unsigned int line = 1;
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE); }
__Stack__ = NULL;
_byteCode_ = fopen(argv[1], "rb");
if (!_byteCode_)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE); }
_byteCodeContent_ = malloc(1024);
if (!_byteCodeContent_)
{
fprintf(stderr, "Error: malloc failed");
exit(EXIT_FAILURE); }
fread(_byteCodeContent_, 1, 1024, _byteCode_);
arr = tokenize(_byteCodeContent_, "\n");
_arr = arr;
while (*arr)
{
args = tokenize(*arr, " \t");
for (_ = 0; _ < 7; _++)
{
if (strcmp(args[0], _instr[_].opcode) == 0)
_instr[_].f(&__Stack__, line); }
superFree(args), args = NULL;
line++;
arr++; }
superFree(_arr), free(_byteCodeContent_);
arr = _arr = NULL;
_byteCodeContent_ = NULL;
fclose(_byteCode_);
return (0); }
