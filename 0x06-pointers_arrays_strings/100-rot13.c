#include "main.h"

/**
 * rot13 - Encode a string using ROT13.
 *
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */

char *rot13(char *str)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; data1[j] != '\0'; j++)
		{
			if (str[i] == data1[j])
			{
				str[i] = datarot[j];
				break;
			}
		}
	}

	return (str);
}
