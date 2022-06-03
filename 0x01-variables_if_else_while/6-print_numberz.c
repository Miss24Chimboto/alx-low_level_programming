#include <stdio.h>
/**
* main - enables it to run successfully
* Description: This prints all single digit numbers of base 10 starting from 0
* Return: 0
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0);
}
