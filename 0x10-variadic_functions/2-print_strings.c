#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - a function that prints strings, followed by a new line.
* @separator: the string to be printed between strings.
* @n: count of args to sum.
* Return: void
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list_;
	char *s;
	unsigned int i;

	va_start(arg_list_, n);
	i = 0;

	while (i < n)
	{
		s = va_arg(arg_list_, char*);
		printf("%s",  (s != NULL) ? s : "(nil)");

		if (i < n - 1)
			printf("%s", (separator != NULL) ? separator : "");

		i++;
	}

	printf("\n");
	va_end(arg_list_);
}
