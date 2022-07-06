#include "function_pointers.h"
/**
*  int_index - returns the index of the first element
*  @size: number of elements in array
*  @array: array to serch through
*  @cmp: pointer to fx
*  Return: -1 if no element matches
*  0 if function does'nt return
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
