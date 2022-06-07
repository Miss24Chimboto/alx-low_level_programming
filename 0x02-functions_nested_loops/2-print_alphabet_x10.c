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
char low;
int counter;

while (counter <= 9)
{
for (low = 'a'; low <= 'z'; low++)
{
_putchar(low);
}
counter++;
_putchar('\n');
}
}
