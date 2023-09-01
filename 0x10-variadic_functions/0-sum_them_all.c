#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of all its param
 *@n: number of param
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list_;
	unsigned int i, accumulator = 0;

	va_start(arg_list_, n);

	for (i = 0; i < n; i++)
	{
		accumulator += va_arg(arg_list_, int);
	}
	va_end(arg_list_);
	return (accumulator);
}
