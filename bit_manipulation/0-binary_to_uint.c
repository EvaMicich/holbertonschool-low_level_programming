#include "main.h"
#include <stdio.h>

int is_binary(char c)
{
	if (c != '0' && c != '1')
	{
		return (0);
	}
	return (1);
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int index;

	num = 0;
	index = 0;
	while (b[index] != '\0')
	{
		if (is_binary(b[index]) == 0)
		{
			return (0);
		}
		num = num << 1;
		if (b[index] == '1')
		{
			num = num | 1;

		}
		index = index + 1;
	}
	return (num);
}
