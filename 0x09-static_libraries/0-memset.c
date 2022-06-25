#include "main.h"

/**
 * _memset - Function that fills the
 * first n bytes of the memory area
 * @s: Pointer to the memory
 * @b: Constant byte
 * @n: An Integer
 *
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
