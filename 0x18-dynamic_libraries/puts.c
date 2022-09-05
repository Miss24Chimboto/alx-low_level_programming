#include "main.h"

/**
 * _puts - funtion used to print
 * @str: string to print
 *
 * Return: 0
 */
void _puts(char *str)
{
int s;

for (s = 0; str[s] != '\0'; s++)
{
_putchar(str[s]);
}
_putchar('\n');
}
