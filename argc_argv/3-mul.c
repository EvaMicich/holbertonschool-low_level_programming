#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiplies 2 numbers
 *@argc: tesxt from command line
 *@argv: array referencing text
 *Return: 0 for success, 1 for failure
 */
int main(int argc, char *argv[])
{
	int int_arg1, int_arg2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int_arg1 = atoi(argv[1]);
		int_arg2 = atoi(argv[2]);
		product = int_arg1 * int_arg2;
		printf("%d\n", product);
		return (0);
	}
}
