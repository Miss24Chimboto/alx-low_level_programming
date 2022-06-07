#include "main.h"
/**
 * print_alphabetx10 - prints alphabets 10 times
 *
 * main - enables it to run successfully
 *
 * Description: function that prints the alphabet in lowercase
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
