#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/*A function that prints all the elements of a list_t list*/
size_t print_list(const list_t *h);

/*A function that returns the number of elements in a linked list_t list*/
size_t list_len(const list_t *h);

/*A function that adds a new node at the beginning of a list_t list*/
list_t *add_node(list_t **head, const char *str);

/*A function that adds a new node at the end of a list_t list*/
list_t *add_node_end(list_t **head, const char *str);

/*A function that frees a list_t list*/
void free_list(list_t *head);

/*A function that writes the character c to stdout*/
int _putchar(char c);

#endif
