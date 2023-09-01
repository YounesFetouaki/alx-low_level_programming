#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: number times table
 *
 * Return: none
 */

void print_times_table(int n)
{
	int i, j, oper;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				oper = i * j;
				_putchar(44);
				_putchar(32);
				if (oper <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(oper + 48);
				}
				else if (oper <= 99)
				{
					_putchar(32);
					_putchar((oper / 10) + 48);
					_putchar((oper % 10) + 48);
				}
				else
				{
					_putchar(((oper / 100) % 10) + 48);
					_putchar(((oper / 10) % 10) + 48);
					_putchar((oper % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
