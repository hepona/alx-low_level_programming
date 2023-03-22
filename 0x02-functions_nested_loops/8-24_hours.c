#include "main.h"
#include <stdio.h>
/**
 * jack_bauer -> every minute!
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 60 ; i++)
	{

		for(j = 0 ; j <= 60 ; j++)
		{
			_putchar(i);
			_putchar(':');
			_putchar(j);
		}
	}
}
