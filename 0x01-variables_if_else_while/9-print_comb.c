#include <stdio.h>
/**
* main - enables it to run successfully
* Description: Printing single numbers
* Return: 0
*/
int main(void)
{
		int number;

		for (number = 0; number <= 9; number++)
		{
		putchar(number + '0');
		if (number < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');

	return (0);
}
