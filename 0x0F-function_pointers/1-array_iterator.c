#include "function_pointers.h"
#include "_putchar.c"
#include <stdio.h>
/**
 * array_iterator -> execute a fct given as parameter on each element of array
 * @array: an array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
