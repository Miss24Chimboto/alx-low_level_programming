#include "main.h"
/**
 * _strcpy - function used to copy strings
 * pointed by source
 * @dest: pointer parameter
 * @src: another pointer parameter
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
