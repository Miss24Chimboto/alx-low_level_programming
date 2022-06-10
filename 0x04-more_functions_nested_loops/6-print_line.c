#include "main.h"
/**
* print_line - afunction that draws a straight line in the terminal
* @n: Int _
*/
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
