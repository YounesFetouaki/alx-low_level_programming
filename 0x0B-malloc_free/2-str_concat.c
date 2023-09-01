#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *result;

	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL); /* Failed to allocate memory */
	}

	if (s1 != NULL)
	{
		strcpy(result, s1);
	}

	if (s2 != NULL)
	{
		strcpy(result + len1, s2);
	}

	return (result);
}
