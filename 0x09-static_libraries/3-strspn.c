#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to consider
 *
 * Return: the number of bytes in the initial segment
 *        of s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;
	int f;

	for (i = 0; s[i] != '\0'; i++)
	{
		f = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				f = 1;
				break;
			}
		}
		if (f == 0)
			break;
	}

	return (length);
}
