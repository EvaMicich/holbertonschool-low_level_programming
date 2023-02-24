#include "main.h"
#include <stdio.h>
/**
 *main - prints 1 to 100 with mulitples of 3 as fizz, multiples of
 *5 as buzz and multiples of 3 and 5 fizzbuzz
 *Return: success 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("Fizzbuzz\t");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\t");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\t");
		}
		else
		{
			printf("%d\t", i);
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
