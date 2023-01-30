#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the elements of the nodes
 * @h: - head of the node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
