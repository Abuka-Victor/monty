#include "monty.h"

/**
 * handle - handles opcodes
 * @opcode: The opcode
 * @num: The number
 * @head: The head of the stack
 * @ln: The line number
 *
 * Return: Null void
 */
void handler(char *opcode, int num, stack_f **head, int ln)
{
	if (strcmp(opcode, "push") == 0)
	{
		if (num == 0 || num == -999)
			error_f(ln, "usage: push integer");
		else
			push(head, num);
	}
	else
	{
		pall(head);
	}
}
