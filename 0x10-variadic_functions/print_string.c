#include "variadic_functions.h"
#include <stdio.h>

void print_string(va_list args)
{
	char *string = va_arg(args, char *);
                    if (string == NULL)
                        string = "(nil)";

                    printf("%s", string);
}
