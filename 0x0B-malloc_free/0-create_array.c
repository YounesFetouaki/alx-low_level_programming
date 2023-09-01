#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int i;

	st = malloc(sizeof(char) * size);
	if (size == 0 || st == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		st[i] = c;
	return (st);
}
