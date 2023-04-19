#include "function_pointer.h"
/**
 * print_name -> print a name
 * @name: a name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
