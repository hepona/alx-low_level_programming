#include "main.h"
#include <stdio.h>
/**
 * times_table -> 9 time table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (j*i < 10)
			{
				printf(" %d", i*j);
			}
			else
			{
				printf("%d", i*j);
			}
			if(j != 9)
			{
				printf(",");
			}
		}
			printf("\n");
	}
}
