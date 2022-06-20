#include "main.h"

/**
 *_strspn - function that gets len of string
 * @s: A string pointer
 * @accept: contains bytes
 *
 * Return: no of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
char *r = s;

while (*accept)
{
while (*s)
{
if (*s == *accept)
{
bytes++;
break;
}
s++;
}
accept++;
s + r;
}
return (bytes);
}
