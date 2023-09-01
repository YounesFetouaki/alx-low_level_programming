#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	return (NULL);

	total_size = nmemb * size;

	p = malloc(total_size);
	if (p == NULL)
	return (NULL);

	memset(p, 0, total_size);

	return (p);
}
