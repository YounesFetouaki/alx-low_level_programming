#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int nu1, nu2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	nu1 = atoi(argv[1]);
	nu2 = atoi(argv[2]);
	res = nu1 * nu2;

	printf("%d\n", res);
	return (0);
}
