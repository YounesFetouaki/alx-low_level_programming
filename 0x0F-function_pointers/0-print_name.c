#include "function_pointers.h"

/**
* print_name - function that prints the name
* @name: name to be printed.
* @f:    pointer to function that will handle printing.
* Return: Void (ALWAYS)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
