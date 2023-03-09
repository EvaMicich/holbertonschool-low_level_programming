#include <stdio.h>
/**
 *main - prints the function name
 * @argc: text from command line
 * @argv: array referencing argc
 *Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
