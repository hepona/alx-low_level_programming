#include "function_pointer.h"
/**
 * print_name -> print a name
 * @name: a name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	f(name);
}
