#include "variadic_functions.h"
#include <stdio.h>

void print_int(va_list args)
{
    int i = va_arg(args, int);
    printf("%d", i);
}
