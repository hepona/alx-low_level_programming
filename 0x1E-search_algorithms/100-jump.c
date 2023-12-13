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
    if (array == NULL)
        return (-1);
    for (i = 0; i < size; i += sqrt(size))
    {
        if (value > array[i] && value < array[i + 3])
        {
            printf("Value found between indexes [%ld] and [%ld]\n", i, i + 3);
            for (j = i; j < size; j++)
            {
                printf("Value checked array[%ld] = [%d]\n", j, array[j]);
            }
        }
        printf("1 Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}