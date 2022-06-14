#include "main.h"

/**
 * rev_string - reversing strings
 * @s: represents the strint to be printed
 *
 * Return: 0
 */
void rev_string(char *s)
{
char r;
int x = 0, i = 0;

while (s[x] != '\0')
	x++;

while (i < x--)
{
r = s[i];
s[i++] = s[x];
s[x] = r;
}
}
