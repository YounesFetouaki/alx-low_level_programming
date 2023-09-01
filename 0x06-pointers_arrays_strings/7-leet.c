#include "main.h"
/**
 * leet - Encode a string into "1337" (Leet Speak).
 *
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char s1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j] || str[i] == s1[j] + 32)
			{
				str[i] = s2[j];
				break;
			}
		}
	}

	return (str);
}
