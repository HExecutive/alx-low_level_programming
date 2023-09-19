#include "main.h"

/**
*swap_int: swap two integers
*@a: value_1
*@b: value_2
*Return: void
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
