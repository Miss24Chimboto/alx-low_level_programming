#include "main.h"

/**
 * puts_half - prints half of string
 * @str: for strings
 *
 * Return: 0
 */
void puts_half(char *str)
{
int len = 0, m, n;

while (str[len] != '\0')
	len++;

if (len % 2 == 0)
	n == len / 2;

else

	n =(len + 1) / 2;

for (m = n; m < len; m++)
       _putchar(str[m]);

_putchar('\n');
}
