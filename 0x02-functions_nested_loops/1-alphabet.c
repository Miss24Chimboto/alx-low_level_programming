#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 * main - enables it to run successfully
 *
 * Description: function that enables lowercase printing
 *
 * Return: 0
 */
void print_alphabet(void)
{
char low;

for (low = 'a'; low <= 'z'; low++)

_putchar(low);
_putchar('\n');

}
