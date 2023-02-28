#include <stdio.h>
#include "main.h"

/**
* swap_int - swaps the values of a and b
* @a: pointer to a
* @b: pointer to b
*/
void swap_int(int *a, int *b)
{
	 int temp;

	 temp = *a;
	 *a = *b;
	 *b = temp;
}
