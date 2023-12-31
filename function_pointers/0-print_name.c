#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name by callback
 * @name: name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
