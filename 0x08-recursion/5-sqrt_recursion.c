#include "main.h"

int _sqT(int n, int m);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqT(n, 0));
}

/**
 * _sqT - finds the natural square root of a number
 * @n: number to calculate the sqaure root of
 * @m: iterator
 *
 * Return: the square root
 */
int _sqT(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqT(n, m + 1));
}
