#include "variadic_functions.h"
#include <stdio.h>
#include "print_char.c"
#include "print_float.c"
#include "print_int.c"
#include "print_string.c"
/**
 * print_all -> print anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list(args);
	int count = 0;
	char *separator = ", ";

	va_start(args, format);
	if (format == NULL)
		return;
	while (format[count] != '\0')
	{
		if (format[count - 1] == 'c' || format[count - 1]  == 's'
				|| format[count - 1]  == 'i' ||
				format[count - 1]  == 'f')
			printf("%s", separator);
		switch (format[count])
		{
			case 'c':
				print_char(args);
				break;
			case 's':
				print_string(args);
				break;
			case 'i':
				print_int(args);
				break;
			case 'f':
				print_float(args);
				break;
			default:
				count++;
				continue;
		}
		count++;
	}
	printf("\n");
}
