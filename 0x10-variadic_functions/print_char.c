#include "variadic_functions.h"
#include <stdio.h>
void print_char(va_list args)
{
    char c = va_arg(args, int);
    printf("%c", c);
}
