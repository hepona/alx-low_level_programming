#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H

#include <stdarg.h>
#include <stddef.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_char(va_list args);
void print_float(va_list args);
void print_int(va_list args);
void print_string(va_list args);

#endif
