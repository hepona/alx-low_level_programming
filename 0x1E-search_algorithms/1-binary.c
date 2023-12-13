#include <search.h>
#include <stdio.h>
/**
* binary_search - function that searches
* for a value in a sorted array of integer
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the first index where value is located, -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
size_t i;
if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
printf("Searching in array:%ld\n", size - i);
}
for (i = 0; i < size; i++)
{
if (array[i] == value)
return (i);
}
return (-1);
}
