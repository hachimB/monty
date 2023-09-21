#include "monty.h"
#include <stdio.h>
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
    char *_codeLine_ = NULL, **args, **_arr;
    stack_t *__Stack__;
    instruction_t _instr[7] = {{"pop", pop}, {"swap", swap}, {"add", add}, {"push", push}, {"pint", pint}, {"pall", pall}, {"nop", nop}};
    int _;
    size_t l = 0;
    ssize_t read;
    unsigned int line = 1;
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    __Stack__ = NULL;
    _byteCode_ = fopen(argv[1], "r");
    if (!_byteCode_)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    
    while ((read ))
    arr = tokenize(_byteCodeContent_, "\n");
    _arr = arr;
    while (*arr)
    {
        args = tokenize(*arr, " \t");
        for (_ = 0; _ < 7; _++)
        {
            if (strcmp(args[0], _instr[_].opcode) == 0)
                _instr[_].f(&__Stack__, line);
        }
        superFree(args), args = NULL;
        line++;
        arr++;
    }
    freeStack(__Stack__), superFree(_arr), free(_byteCodeContent_);
    arr = _arr = NULL;
    _byteCodeContent_ = NULL;
    fclose(_byteCode_);
    return (0);
}
