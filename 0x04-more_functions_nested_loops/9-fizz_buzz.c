#include "main.h"
#include <stdio.h>

/**
 * main - enables it to run successfully
 * Return: 0
 */
int main(void)
{
char a = 1;
for (a = 1; a < 100; a++)
if (a % 3 == 0 && a % 5 == 0)
{
    _putchar("FizzBuzz ");
}
else if (a % 5 == 0)
{
    _putchar("Buzz ");
}
else if (a % 3 == 0)
{
    _putchar("Fizz ");
}
else
{
    _putchar("%d ", a);
}
_putchar("Buzz");
_putchar("\n");
return (0);
}
