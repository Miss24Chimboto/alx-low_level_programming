#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that searches a string for
 *  any of a set of bytes
 *  @s: a pointer
 *  @accept: set of bytes
 *
 *  Return: a pointer to the byte in s else NULL
 */
char *_strpbrk(char *s, char *accept)
{
int a;

while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
{
return (s);
}
}
s++;
}
return (NULL);
}
