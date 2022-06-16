#include "monty.h"

/**
 * push - a function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: The head of the list
 * @n: The element number of the list
 *
 * Return: The address of the new node
 */
stack_f *push(stack_f **head, unsigned int n)
{
	stack_f *node;

	node = malloc(sizeof(stack_f));
	if (!node)
		return (NULL);

	node->n = n;
	if (!(*head))
	{
		node->next = NULL;
		node->prev = NULL;
		(*head) = node;
	}
	else
	{
		node->next = (*head);
		(*head)->prev = node;
		(*head) = node;
	}
	return (node);
}
