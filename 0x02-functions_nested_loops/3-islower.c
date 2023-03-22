#include "main.h"
#include <ctype.h>

/**
 * _islower -> lowercase checker
 */
int _islower(int c){
	
	if(islower(c))
	{
		putchar(c);
		return (1);
	}
}
