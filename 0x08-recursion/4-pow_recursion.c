#include "main.h"
/**
 * _pow_recursion - fx that returns the value of x ^ y
 * @x: an int
 * @y: an int also
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
