#include "monty.h"

/**
 * main - check the code.
 * @argc : argc of main function.
 * @argv : argv of main function.
 * Return: always 0
 */

int main(int argc, char **argv)
{
FILE *_byteCode_;
char *_byteCodeContent_ = NULL, **arr;
instruction_t _ins[] ={{"push", push}, {"pop", pop}, {"swap", swap},
		       {"pint", pint}, {"pall", pall}, {"nop", nop},
		       {"add", add}};
(void)_ins;
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
_byteCode_ = fopen(argv[1], "rb");
if (!_byteCode_)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
_byteCodeContent_ = malloc(1024);
if (!_byteCodeContent_)
{
fprintf(stderr, "Error: malloc failed");
exit(EXIT_FAILURE);
}
fread(_byteCodeContent_, 1, 1024, _byteCode_);
arr = tokenize(_byteCodeContent_, "\n");
while (*arr)
{
printf("%s\n", *arr);
arr++;
}
free(_byteCodeContent_);
fclose(_byteCode_);
return (0);
}
