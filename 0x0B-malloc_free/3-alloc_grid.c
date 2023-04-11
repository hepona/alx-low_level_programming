#include "main.h"

/**
 * alloc_grid -> pointer to a 2d array
 * @width: integer
 * @height: integer
 * Return: pointer to 2d array, NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **m;

	if (width == 0 || height == 0)
		return (NULL);
	m = malloc(sizeof(int) * height);

	if (m == 0)
		return (NULL);
	for (i = 0; i < height ; i++)
	{
		m[i] = malloc(sizeof(int) * width);
		if (m[i] == NULL)
		{
			for (j = 0 ; j < i ;j++)
			{
				free(m[j]);
			}
			free(m);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			m[i][j] = 0;
		}
	}
	return (m);
}
