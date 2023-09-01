#include "function_pointers.h"

/**
* int_index - a function that searches for an int.
* @array:  input array.
* @cmp: the comparing function.
* @size:   is the size of the array
* Return: Void (ALWAYS)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
