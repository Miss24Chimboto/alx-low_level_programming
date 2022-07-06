#include "function_pointers.h"
/**
*  @size: no of elements in array
*  @cmp: pointer to fx
*  int_index - returns the index of the first element
*  Return: -1 if no element matches and if size <= 0 
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
