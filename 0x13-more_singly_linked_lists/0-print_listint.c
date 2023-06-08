#include "lists.h"

/**
 * print_listint - prints linked list elements
 * @h: type listint_t to print
 * Return: number of nodes that are returned
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
