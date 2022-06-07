#include "main.h"
/**
 * print_alphabet - prints alphabets 10 times
 * main - enables it to run successfully
 *
 * Description: function that prints 10 times the alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char low; 
int counter;

while (counter<10)
{
    for (low = 'a'; low <= 'z'; low++)
    {
        putchar(low);
    }
counter++;
putchar('\n');
}
return (0);
}
