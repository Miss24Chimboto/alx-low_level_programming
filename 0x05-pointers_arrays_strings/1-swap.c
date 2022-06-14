#include "main.h"

/**
 * swap_int - function that swaps two ints
 * @a: int to be swapped
 * @b: int swappee
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int s;

s = *a;
*a = *b;
*b = s;
}
