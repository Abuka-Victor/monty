#include "monty.h"

/**
 * free_f - a function that frees a dlistint_t list.
 * @head: The head of the list
 *
 * Return: Null void
 */
void free_f(stack_f *head)
{
	stack_f *keep;

	if (!head)
		return;

	keep = head->next;
	free(head);
	while (keep)
	{
		head = keep;
		keep = keep->next;
		free(head);
	}
}
