#include "main.h"
#include <stdio.h>
/**
 * jack_bauer -> every minute!
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0 ; i < 3 ; i++)
	{

		for (j = 0 ; j < 10 ; j++)
		{
			if ((i <= 1 && j <= 9) || (j <= 2 && j <= 3))
			{
			for (k = 0 ; k < 6 ; k++)
			{
				for (l = 0; l < 10 ; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
		}
	}
}
