#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all -> print anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list(args);
	int count = 0;
	char chara;
	int ent;
	float f;
	char *string;
	char *separator = ", ";

	va_start(args, format);

	while (format[count] != '\0')
	{
		switch (format[count])
		{
			case 'c':
				chara = va_arg(args, int);
				printf("%c", chara);
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			case 'i':
				ent = va_arg(args, int);
				printf("%d", ent);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			default:
				printf(" ");
				break;
		}
		count++;
		if (format[count] != '\0' && (format[count] == 'c'
			|| format[count]  == 's' ||
			format[count]  == 'i' ||
			format[count]  == 'f'))
			printf("%s", separator);
	}
	printf("\n");
}
