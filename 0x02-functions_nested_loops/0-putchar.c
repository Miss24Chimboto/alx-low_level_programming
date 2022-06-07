#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * prints out _putchar followed by a newline.
 *
 * Return: 0
 */

int main(void)
{
	char ch[8] = "_putchar";
	int p;

	for (p = 0; p < 8; p++)
		_putchar(ch[p]);

	_putchar('\n');

	return (0);
}
