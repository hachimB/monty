#ifndef MONTY_H
#define MONTY_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern char **args;

ssize_t _getline_(char **lineptr, size_t *n, FILE *stream);
char *_strdup_(char *st, unsigned int line_number);
char **tokenize(char *_code_, char *__sep__, unsigned int line_number);
int stackLen(stack_t *s);
int isNum(char *str);
int arrLen(char **arr);
void swap(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void superFree(char **__);
void freeStack(stack_t *stack);

void _read_(
		char ***as,
		char **_codeLine_,
		unsigned int *line,
		instruction_t _instr[7],
		FILE **_byteCode_,
		stack_t **__Stack__
	   );

#endif
