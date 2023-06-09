#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings -> print string
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i;
	char *x;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, char*);
		if (x == NULL)
			x = "(nil)";
		printf("%s", x);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
