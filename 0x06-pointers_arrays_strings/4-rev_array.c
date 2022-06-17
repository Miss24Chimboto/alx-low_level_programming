#include"main.h"
/**
 * reverse_array - used to reverse arrays
 * @a: array
 * @n: no of elements
 *
 * Return: void
 */
void reverse_array(int*a, int n)
{
int i;
int tmp;

for (i = 0; i < n--; i++)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
}
}
