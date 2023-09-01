#include "main.h"

/**
 * print_alphabet - use the function _putchar to print alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int n;

	for (n = 97 ; n <= 122 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
