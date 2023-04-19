#include "function_pointers.h"

/**
 * int_index -> search an integer
 * @array: an integer array
 * @size: size of array
 * @cmp: pointer function
 * Return: index of first element, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || (array == NULL && cmp == NULL))
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
		else
			return (-1);
	}
	return (0);
}
