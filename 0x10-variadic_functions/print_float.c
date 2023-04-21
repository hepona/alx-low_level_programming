#include "variadic_functions.h"
#include <stdio.h>
void print_float(va_list args)
{
    double f = va_arg(args, double);
    printf("%f", f);
}
