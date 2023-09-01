#include "main.h"

/**
 * _sqrt_recursive - Helper function to calculate the square root recursively
 * @n: The number to calculate the square root of
 * @i: The current i for the square root
 *
 * Return: The natural square root of n, or -1
 */
int _sqrt_recursive(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_recursive(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of n, or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursive(n, 0));
}
