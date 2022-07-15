#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - prints all elements of a list_t list
 *@h: singly linked list
 * if str is NULL, print [0] (nil)
 *
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
size_t a;

for (a = 0; h; a++)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (a);
}
