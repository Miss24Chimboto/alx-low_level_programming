#include "main.h"
/**
 * factorial - fx for finding the factorial
 * @n : an int value
 *
 * Return: -1 for error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
