#include "main.h"

/**
 * print_line - draws a straight line.
 * @n: numbre of times the character_
 * If n is 0 or less, the function should only print \n.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
