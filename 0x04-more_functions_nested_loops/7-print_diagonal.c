#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of times to print the diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');

	}

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
