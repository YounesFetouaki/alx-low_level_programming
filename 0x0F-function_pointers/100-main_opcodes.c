#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints the opcodes of its own main function
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: Always 0(Success)
 */
int main(int argc, char **argv)
{
	unsigned char *m;
	int i, nbytes;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	m  = (unsigned char *)main;
	i = 0;

	while (i < nbytes)
	{
		printf("%02x", m[i]);

		if (i != nbytes - 1)
			putchar(' ');

		i++;
	}

	printf("\n");
	return (0);
}
