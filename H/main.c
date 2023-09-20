#include "monty.h"
/**
 * main - check the code.
 * @argc : argc of main function.
 * @argv : argv of main function.
 * Return: always 0
 */
stack_t *top = NULL;
int main(int argc, char **argv)
{
int data;
if (argc != 2 || !isdigit(argv[1]))
{
fprintf(stderr, "L<line_number>: usage: push integer\n");
exit(EXIT_FAILURE);
}
data = atoi(argv[1]);
push(data);
pall();
return (0);
}
