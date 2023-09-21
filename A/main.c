#include "monty.h"
/**
 * main - check the code.
 * @argc : argc of main function.
 * @argv : argv of main function.
 * Return: always 0
 */

char **args;
int main(int argc, char **argv)
{
    FILE *_byteCode_;
    stack_t *__Stack__;
    instruction_t _instr[7] = {
        {"pop", pop}, 
        {"swap", swap}, 
        {"add", add}, 
        {"push", push}, 
        {"pint", pint}, 
        {"pall", pall}, 
        {"nop", nop}
    };
    char *_codeLine_ = NULL;
    size_t l = 0;
    ssize_t read;
    unsigned int line = 1;
    int _;
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
    
    while ((read = _getline_(&_codeLine_, &l, _byteCode_)) != -1)
    {
        args = tokenize(_codeLine_, " \t\n");
        for (_ = 0; _ < 7; _++)
        {
            if (strcmp(args[0], _instr[_].opcode) == 0)
                _instr[_].f(&__Stack__, line);
        }
        superFree(args), args = NULL;
        line++;

    }

    freeStack(__Stack__), free(_codeLine_);
    _codeLine_ = NULL;
    fclose(_byteCode_);
    return (0);
}
