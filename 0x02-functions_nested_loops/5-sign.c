#include "main.h"

/**
 *print_sign - prints the sign of a number.
 *@n: This is a character in ASCII code.
 *Return: 1 if n > zero, 0 if n is zero, -1 if n < zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
