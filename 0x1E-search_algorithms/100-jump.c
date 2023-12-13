#include <search.h>
#include <stdio.h>
#include <math.h>
/**
 * jump_search - function that searches for a value in an array of integers
 *  using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
size_t i;
size_t j;
int jump = (int)sqrt(size);

if (array == NULL)
return (-1);
for (i = 0; i < size && array[i] < value; i += jump)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}

printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);

for (j = i - jump; j <= i && j < size; j++)
{
printf("Value checked array[%ld] = [%d]\n", j, array[j]);
if (array[j] == value)
return (j);
}
return (-1);
}
