#include "monty.h"

int main(int ac, char **av __attribute__((unused)))
{
	FILE *fptr;
	char opcode[5];
	int num = -999, ln = 1;
	stack_f *head;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	head = NULL;

	if ((fptr = fopen(av[1], "r")) == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	while (!feof(fptr))
	{
		fscanf(fptr, "%4s%d", opcode, &num);
		handler(opcode, num, &head, ln);
		num = -999;
		ln++;
	}

	free_f(head);
}
