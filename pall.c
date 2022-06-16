#include "monty.h"

/**
 * pall - Prints the elements in a doubly linked list
 * @head: The head of the list
 *
 * Return: Size of the structure
 */
size_t pall(stack_f **head)
{
	size_t count = 0;
	stack_f *h = (*head);

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
