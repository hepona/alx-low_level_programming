#include "function_pointer.h"
#include <string.h>
/**
 * print_name -> print a name
 * @name: a name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	int l = strlen(name);

	if (name[l + 1] == '\0')
	f(name);
}
