#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string that is to be evaluated
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
s++;
len++;
}
return (len);
}
