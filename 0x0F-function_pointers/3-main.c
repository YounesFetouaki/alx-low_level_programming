#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
* main - Entry point
* program that does a specific op, based on cli args.
* @argc: arg count
* @argv: arg array
* Return: 0 on success, 1 on failure.
*/
int main(int argc, char **argv)
{

	int a, b;
	char *op;
	int (*func)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	a  = atoi(argv[1]);
	op = argv[2];
	b  = atoi(argv[3]);
	func = get_op_func(op);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((b == 0) && ((strcmp(op, "%") == 0) || (strcmp(op, "/") == 0)))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", func(a, b));
	return (0);
}
