#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Description: function that prints the alphabet x 10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i, a;

for (i = 0; i <= 9; i++)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
