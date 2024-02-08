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
    size_t midle = size / 2;
    size_t i, j;
    if (array == NULL)
        return (-1);

    if (array[midle] == value)
        return (midle);
    for (i = midle; i > 0; i--)
    {
        printf("Searching in array: ");
        for (j = 0; j < size ; j++)
            printf("%d, ", array[j]);
        printf("\n");
        if (array[i] == value)
            return (i);
        binary_search(array + i + 1, size - i - 1, value);
    }
    return (-1);
}
