#include "lists.h"
/**
 * list_len - A function that returns the number of elements
 * in a linked list_t list
 * @h: Singly linked list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
int a = 0;

while (h)
{
a++;
h = h->next;
}
return (a);
}
