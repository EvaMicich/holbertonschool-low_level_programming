#include <stdio.h>
/**
 *main - prints the number of arguments
 *@argc: tesxt from command line
 *@argv: array referencing text
 *Return: number of arguments
 */
int main(int argc, char *argv[])
{
	int adjust_arg;

	adjust_arg = argc - 1;
	printf("%d\n", adjust_arg);
	(void)argv;
	return (0);
}
