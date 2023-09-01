#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63;
	int  counter = 0;
	unsigned long int curr;
	unsigned long int excl;

	excl = n ^ m;

	while (i >= 0)
	{
		curr = excl >> i;
		if (curr & 1)
			counter++;
		i--;
	}

	return (counter);
}
