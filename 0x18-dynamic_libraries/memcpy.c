#include "main.h"
/**
 * _memcpy - function that copies n bytes from memory
 * area src to memory area dest
 * @dest: copies to destination
 * @src: copies from source
 * @n: size determiner
 *
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
