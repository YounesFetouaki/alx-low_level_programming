#include "main.h"

/**
 * get_endianness - checks the endia otherwise
 * Return: 0 for big, 1 otherwise
 */


int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *c = (unsigned char *)&i;

	return (*c);
}
