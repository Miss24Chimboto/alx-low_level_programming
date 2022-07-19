#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a list
 *
 * @h: pointer parameter
 *
 * Return: returns number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
