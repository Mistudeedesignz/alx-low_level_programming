#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of node.
 */
size_t print_listint(const listint_t *j)
{
	size_t nnodes = 0;

	while (j != NULL)
	{
		printf("%d\n", j->n);
		j = j->next;
		nnodes++;
	}
	return (nnodes);
}
		
